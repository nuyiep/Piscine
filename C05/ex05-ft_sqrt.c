#include <stdio.h>

int ft_sqrt(int nb);

int main()
{
    int result = ft_sqrt(-1);
    printf("%d\n", result);
}

int ft_sqrt(int nb)
{
    int i = 1;

    while (i <= nb/2)
    {
        if (i * i == nb)
            return i;
        else 
            i++;
    } 
    return 0;
}