#include <unistd.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_print_number(int *t, int size)
{
	int		i;
	int		j;

	i = 1;
	j = 1;
	while (i < size)
	{
		if (t[i - 1] >= t[i])
			j = 0;
		i++;
	}
	if (j)
	{
		i = 0;
		while (i < size)
			ft_putchar(t[i++] + 48);
		if (t[0] < (10 - size))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	int		i;
	int		nbarr[n];

	i = 0;
	if (n == 1)
		while (i < 10)
			ft_putchar(i++ + 48);
	while (i < n)
		nbarr[i++] = 0;
	while (nbarr[0] <= (10 - n) && n > 1)
	{
		ft_print_number(nbarr, n);
		nbarr[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (nbarr[i] > 9)
			{
				nbarr[i - 1]++;
				nbarr[i] = 0;
			}
		}
	}
}

int main()
{
    ft_print_combn(2);
    return (0);
}