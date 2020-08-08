#include <unistd.h>

<<<<<<< HEAD
extern
=======
void ft_putchat(char c);

int main()
{
	char word;

	word = 'a';
	word += 30;

	write(1, &word, 1);
	return(0);
}
>>>>>>> ad0d1493fd327b53352a296c9765023f480e86a4
