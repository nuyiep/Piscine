#include <unistd.h> 

void print(char num)
{
    write(1, &num, 1);
}

void ft_putnbr(int nb)
{
    if (nb < 0)
    {
        print('-');
        nb = -nb;
    }
    if (nb >= 10)
    {
        ft_putnbr(nb/10);
        nb = nb % 10;
    }
    if (nb < 10)
    {
        print(nb + 48);
    }
}

int main()
{
    ft_putnbr(422);
    print('\n');
}