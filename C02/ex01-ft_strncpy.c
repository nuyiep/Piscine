#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
    char destination[] = "Destination";
    char source[] = "Source";

    ft_strncpy(destination, source, 10);
    printf("%s\n", destination); 
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i = 0;

    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    dest[i] = '\0';
    return dest;
}