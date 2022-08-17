#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str);

int main()
{
	printf("%d\n", ft_atoi("-12312"));
	printf("%d\n", ft_atoi("--wada+-12312"));
	printf("%d\n", ft_atoi("wadawd-12312"));
	printf("%d\n", ft_atoi("-12awdawd312"));
	printf("%d\n", ft_atoi("-+++12312"));
	printf("%d\n", ft_atoi("--12312"));
	printf("%d\n", ft_atoi("   --+-12312"));
}

int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int num = 0;

    while (str[i] < '0' || str[i] >= '9') // not digits 
    {
        if (str[i] == '-') // negative
        {
            sign = sign * -1;
            i++;
        }
        else
            i++;
    }
    while (str[i] >= '0' && str[i] <= '9')  // is digit then convert
    {
        num = (num * 10) + (str[i] - '0');
        i++;
    }
    return (num * sign);
}