#include <stdio.h>

int ft_str_is_alpha(char *str);

int main()
{
    char string[] = "Harry?";
    int result = ft_str_is_alpha(string);
    printf("%d\n", result);
}

int ft_str_is_alpha(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] < 'a' && str[i] > 'Z' || str[i] < 'A' || str[i] > 'z')
            return 0;
        i++;
    }
    return 1;
}