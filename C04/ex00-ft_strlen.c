#include <stdio.h>

int ft_strlen(char *str);

int main()
{
    char string[] = "Harry";
    int result = ft_strlen(string);
    printf("%d\n", result);
}

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}