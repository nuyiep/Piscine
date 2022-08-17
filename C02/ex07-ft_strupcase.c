#include <stdio.h>

char *ft_strupcase(char *str);

int main()
{
    char string[] = "harrY9.";
    ft_strupcase(string);
    printf("%s\n", string);
}

char *ft_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        i++;
    }
    return str;
}