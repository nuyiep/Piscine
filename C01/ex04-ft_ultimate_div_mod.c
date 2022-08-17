#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main()
{
    int temp1 = 100;
    int temp2 = 5;
    int *a = &temp1;
    int *b = &temp2;
    ft_ultimate_div_mod(a, b);
    printf("%d\n %d\n", *a, *b);
}

void ft_ultimate_div_mod(int *a, int *b)
{
    int temp;

    temp = *a / *b;
    *b = *a % *b;
    *a = temp;
}