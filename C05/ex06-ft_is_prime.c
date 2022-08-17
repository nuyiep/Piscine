#include <stdio.h>

int ft_is_prime(int nb);

int main()
{
    int result = ft_is_prime(29);
    printf("%d\n", result);
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
    return 1;
}