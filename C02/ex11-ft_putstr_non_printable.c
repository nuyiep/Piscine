#include <unistd.h> 
#include <stdio.h>

void ft_putstr_non_printable(char *str);
void ft_putchar(char c);

int main()
{
    char string[] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(string);
}

void ft_putstr_non_printable(char *str)
{
    int i = 0;
    char base16[] = "0123456789abcdef";

    while (str[i] != '\0')
    {
        if (str[i] < 32 || str[i] == 127)
        {
            ft_putchar('\\');
            ft_putchar(base16[str[i] / 16]);
            ft_putchar(base16[str[i] % 16]);
        }
        else 
            ft_putchar(str[i]);
        i++;
    }
    ft_putchar('\n');
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

/*
1. convert decimal to hexidecimal 
    https://www.youtube.com/watch?v=4um7-QbpAQ8&ab_channel=MichaelSchwartz
    printable characters 
    isprint() 
    https://www.eso.org/~ndelmott/ascii.html

    \a = Bell = 7
    \b = Backspace = 8
    \t = Horizontal tab = 9
    \n = New line = 10
    \v = Vertical tab = 11
    \f = Form Feed = 12
    \r = Carriage return = 13

2. need to put '\\' for the back slash

3.  Using divide and mod is correct in this case but if the number 
    goes larger, it won't work. E.g. won't work for 988. 

4. another way of writing while loop- a compact version
    n = -1;
	while (str[++n])

*/
