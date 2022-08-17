#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str);

int main()
{
    char string[] = "harry";
    ft_putstr(string);
}

void ft_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}