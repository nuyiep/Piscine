#include <stdio.h>

int ft_strlen(char *str);

int main()
{
    char *str = "hello world";
    int result = ft_strlen(str);
    printf("%d\n", result);
}

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}