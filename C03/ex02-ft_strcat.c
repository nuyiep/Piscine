#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main()
{
    char destination[] = "Hello ";
    char source[] = "World";
    ft_strcat(destination, source);
    printf("%s\n", destination);
}

char *ft_strcat(char *dest, char *src)
{
    int i = 0;
    int x = 0;

    while (dest[x] != '\0')
    {
        x++;
    }

    while (src[i] != '\0')
    {
        dest[x]= src[i];
        i++;
        x++;
    }
    dest[x] = '\0';
    return dest;
}