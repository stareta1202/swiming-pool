#include <unistd.h>

void ft_putchat(char c);

int main()
{
	char word;

	word = 'a';
	word += 30;

	write(1, &word, 1);
	return(0);
}
