#include <stdio.h>
void ft_ft(int *nbr);

int main()
{
    int a = 1112;
    int *ptr;

    ptr = &a;
    ft_ft(ptr);
    printf("%d\n", a);
}

void ft_ft(int *nbr)
{
    *nbr = 42;
}
