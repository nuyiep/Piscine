#include <stdio.h>

int ft_str_is_printable(char *str);

int main()
{
    char string[] = "\t";
    int result = ft_str_is_printable(string);
    printf("%d\n", result);
}

int ft_str_is_printable(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] < 32 || str[i] > 127)
            return 0;
        i++;
    }
    return 1;
}