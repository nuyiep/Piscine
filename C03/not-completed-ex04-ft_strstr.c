#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main()
{

}

char *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    int j = 0;

    while (to_find[i] != '\0' && str[i] != '\0')
    {
        if (str[i] == to_find[i])
        {
            write(1, &to_find[i], 1);
            if (str[i+1] == to_find(i + 1))
                s
            i++;
        }
        else
        {
            i++;
        }

    }
}