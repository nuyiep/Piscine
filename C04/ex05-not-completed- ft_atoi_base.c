// not completed

#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int main()
{

}

int	check(char *base, int baselen) // error checking only - ignore
{
	int	i;
	int	j;
	if (baselen < 2) // base is size of one or less - invalid arguments and nothing should be displayed, hence return 0
		return (0);
	i = 0;
	while (base[i] != '\0') // search for + and - 
	{
		if (base[i] == '+' || base[i] == '-'|| base[i] == ' ') // + - sp (32) invalid argument
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

int ft_atoi_base(char *str, char *base)
{
    int i = 0;
    int sign = 1;
    int num = 0;

    while (str[i] < '0' || str[i] >= '9') // not digits 
    {
        if (str[i] == '-')
        {
            sign = sign * -1;
            i++;
        }
        else
            i++;
    }
    while (str[i] >= '0' && str[i] <= '9') 
    {
        num = (num * 10) + (str[i] - '0');
        i++;
    }
    return (num * sign);
}

int	ft_strlen(char *str) // count string length
{
	int	i = 0;
	
	while(str[i] != '\0')
		i++;
	return (i);
}