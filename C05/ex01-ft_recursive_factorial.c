#include <stdio.h>

int ft_recursive_factorial(int nb);

int main()
{
    int outcome = ft_recursive_factorial(-1);
    printf("%d\n", outcome); 
}

int ft_recursive_factorial(int nb)
{
    if (nb < 0) // invalid 
        return 0;
    if (nb == 0) // 0! = 1
        return 1;
    int result = nb * ft_recursive_factorial(nb-1);
    return result;
}