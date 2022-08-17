#include <stdio.h>

int ft_iterative_factorial(int nb);

int main()
{
    int factorial = ft_iterative_factorial(6);
    printf("%d\n", factorial);
}

int ft_iterative_factorial(int nb)
{
    int result = nb;
    int i = nb - 1; // i = 3

    if (nb < 0) // error checking
    {
        return 0;
    }
    if (nb == 0)
    {
        return 1;
    }
    while (i > 0)
    {
        result = result * i;
        i--;
    }
    return result;
}