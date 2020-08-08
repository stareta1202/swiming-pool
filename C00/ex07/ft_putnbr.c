#include <unistd.h>

<<<<<<< HEAD
void    ft_putchar(char c)
{
  write(1, &c, 1);
}
void    ft_putnbr(int nb)
{
        long i;

        i = nb;
        if (i < 0)
        {
                ft_putchar('-');
                i = i * (-1);
        }
        if (i > 9)
        {
                ft_putnbr(i / 10);
                ft_putnbr(i % 10);
        }
        else
        {
                ft_putchar(i + 48);
        }
=======
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb > 0)
        ft_putchar
}

void ft_ascint(int n)
{
    
>>>>>>> ad0d1493fd327b53352a296c9765023f480e86a4
}