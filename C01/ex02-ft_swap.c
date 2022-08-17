#include <stdio.h>

void ft_swap(int *a, int *b);

int main()
{
    int num1 = 5;
    int num2 = 10;
    
    int *first = &num1;
    int *second = &num2;    
    int temp;

    ft_swap(first, second);
    printf("%d\n", *first);
}

void ft_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}