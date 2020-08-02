#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char word;

	word = 'z';
	while (word >= 'a')
	{
		ft_putchar(word);
		word--;
	}
}
