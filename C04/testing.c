// chuasai's code - thank kiuuu! - except the comments

#include <unistd.h>
#include <stdio.h>

void 	ft_putchar(char a);
void	ft_putnbr_base(int nbr, char *base);
int		ft_strlen(char *str);
int		check(char *base, int baselen);
//void	ft_putMININT_base(unsigned int nbr, char *base, unsigned int baselen);

int main()
{
	ft_putnbr_base(-12312312, "012"); // base 3
	printf("\n");
}

void	ft_putchar(char a)
{
	write(1,&a,1);
}

void	ft_putnbr_base(int nbr, char *base)  //
{
	int	baselen = ft_strlen(base); // count base - which base 

	if (check(base, baselen) == 0) // if the error checking failed, return void- nothing will be displayed
		return ;
	else if (nbr < 0) // to handle negative number- ignore
	{
		ft_putchar('-');
		if (nbr == -2147483648) // to handle max negative integer
		{
			nbr = nbr * -1
			ft_putnbr_base((nbr / baselen), base); //recursion 
			ft_putchar(base[nbr % baselen]); //print out the remainder
			//ft_putMININT_base(2147483648, base, (unsigned int) baselen);
			return ;
		}
		ft_putnbr_base(-nbr, base);
	}
	else if (nbr >= baselen) //*****core part
	{
		ft_putnbr_base((nbr / baselen), base); //recursion 
		ft_putchar(base[nbr % baselen]); //print out the remainder
	}
	else
		ft_putchar(base[nbr % baselen]); //print out first number
}

int	ft_strlen(char *str) // count string length- ignore
{
	int	i = 0;
	
	while(str[i] != '\0')
		i++;
	return (i);
}

int	check(char *base, int baselen) // error checking only - ignore
{
	int	i;
	int	j;
	if (baselen < 2) // base is size of one - invalid arguments and nothing should be displayed, hence return 0
		return (0);
	i = 0;
	while (base[i] != '\0') // search for + and - 
	{
		if (base[i] == '+' || base[i] == '-') // + - invalid argument
			return (0);
		i++;
	}
	i = 0;
	while (base[i] != '\0')  // search for same character twice 
	{
		j = i + 1;    
		while (base[j] != '\0')  // complete this while loop first, check i = 0 the first i against j++;
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

/*
void	ft_putMININT_base(unsigned int nbr, char *base, unsigned int baselen)
{
	if (nbr >= baselen) // to print out values more than base 
	{
		ft_putMININT_base((nbr / baselen), base, baselen); // recursion- continue until nbr is less than base
		ft_putchar(base[nbr % baselen]); // print out the reminder (other than the first number)
	}
	else
		ft_putchar(base[nbr % baselen]); // print out the reminder of the first number
}
*/