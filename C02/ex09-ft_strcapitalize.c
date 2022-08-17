#include <stdio.h>

char *ft_strcapitalize(char *str);

int main()
{
    char string[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    ft_strcapitalize(string);
    printf("%s\n", string);
}

char *ft_strcapitalize(char *str)
{
    int i = 1;

    str[0] = str[0] - 32;

    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == 32 || str[i - 1] == '-' || str[i - 1] == '+'))
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return str;
}