#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main()
{
    int array[] = {15, 14, 13, 12, 11};
    ft_sort_int_tab(array, 5);
    for (int i = 0; i < 5; i++)
        printf("%d ", array[i]);
    printf("\n");
}

void ft_sort_int_tab(int *tab, int size)
{
    int temp;
    int i = 0;

    while (i < size)
    {
        if (tab[i + 1] < tab[i])
        {  
            temp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;
            i = 0;
        }
        else 
            i++;
    }
}