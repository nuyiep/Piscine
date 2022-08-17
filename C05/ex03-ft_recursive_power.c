#include <stdio.h> 

int ft_recursive_power(int nb, int power);

int main()
{
    int outcome = ft_recursive_power(3, 1);
    printf("%d\n", outcome);
}

int ft_recursive_power(int nb, int power)
{
    if (power < 0) // error handling
        return 0;
    if (power == 0)
        return 1;
    if (power > 0)
    {
        int result =  nb * ft_recursive_power(nb, power -1);
        return result;
    }
    return 0;
}