#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main()
{
    char destination[] = "Destination";
    char source[] = "Source";
    ft_strcpy(destination, source);
    printf("%s\n", destination);
}

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
       dest[i]= src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}