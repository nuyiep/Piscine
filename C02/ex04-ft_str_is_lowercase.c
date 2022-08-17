#include <stdio.h> 

int ft_str_is_lowercase(char *str);

int main()
{
    char string[] = "harry0";
    int result = ft_str_is_lowercase(string);
    printf("%d\n", result); 
}

int ft_str_is_lowercase(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] < 'a' ||  str[i] > 'z')
            return 0;
        i++;
    }
    return 1;
}