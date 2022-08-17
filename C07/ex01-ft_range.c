#include <stdlib.h> // malloc
#include <stdio.h>

int *ft_range(int min, int max);

int main()
{
    int min = 110;
    int max = 150;
    int *array = ft_range(min, max);
    int i = 0; 
    while (i < (max - min))
    {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");
}

/*
int main()
{
    int *result = ft_range(4, 10);
    
    for (int i = 4; i < 10; i++)
        printf("%d ", result[i]);
}
*/

int *ft_range(int min, int max)
{
    int i = 0;
    int *range;

    if (min >= max)
        return NULL;
    else 
    {
        range = (int*) malloc ((max-min) * sizeof(int));
        while (min < max)
        {
            range[i] = min; 
            i++;
            min++;
        }
    }
    return range;
}