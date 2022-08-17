#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
    char destination[] = "Hello ";
    char source[] = "World";
    ft_strncat(destination, source, 3);
    printf("%s\n", destination);
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int count = 0;
    int i = 0;
    
    while (dest[count] != '\0')
    {
        count++;
    }
    while (src[i] != '\0' && i < nb)
    {
        dest[count] = src[i];
        i++;
        count++;
    }
    dest[count] = '\0';
    return dest;
}