#include <stdio.h>

int ft_find_next_prime(int nb);
int ft_is_prime(int nb);

int main()
{
    int result = ft_find_next_prime(90);
    printf("%d\n", result);
}

int ft_find_next_prime(int nb)
{
    while (1)
    {
        if (ft_is_prime(nb) == 1) // if it is a prime number
            return nb;
        nb++;
    }
}

int ft_is_prime(int nb)
{
    if (nb <= 1)
        return 0;
    int i = 2;
    while (i < nb)
    {
        if (nb % i == 0)
            return 0;
        else 
            i++;
    }
    return 1; // prime number return 1
}