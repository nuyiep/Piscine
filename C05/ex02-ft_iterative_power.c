#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main()
{
    int outcome = ft_iterative_power(0, -1);
    printf("%d\n", outcome);
}

int ft_iterative_power(int nb, int power)
{
    int result = 0;
    
    while (power > 1)
    {
        result = result + (nb * nb); 
        power--;
    } 
    return result;
}