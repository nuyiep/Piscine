#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main()
{
    int num[] = {9, 8, 10, 12};
    ft_rev_int_tab(num, 4);
    for (int i = 0; i < 4; i++)
        printf("%d ", num[i]);
    printf("\n");
}

void ft_rev_int_tab(int *tab, int size)
{
    int temp;
    int i = 0;

    while (i <= size/2)
    {
        temp = tab[0 + i]; 
        tab[0 + i] = tab[size - 1];
        tab[size - 1] = temp;
        size--;
        i++;
    }
}