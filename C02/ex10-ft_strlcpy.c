#include <stdio.h>
#include <string.h> //strlcpy

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
    char destination[] = "Destination";
    char source[] = "Source";
    //ft_strlcpy(destination, source, 4);
    strlcpy(destination, source, 4);
    printf("%s\n", destination);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int count = 1;
    unsigned int i = 0;

    while (src[count] != '\0')
        count++;
    while (src[i] != '\0' && i < (size - 1))
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (count);
}