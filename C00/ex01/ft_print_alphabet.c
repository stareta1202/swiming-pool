<<<<<<< HEAD
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongjlee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 15:25:25 by yongjlee          #+#    #+#             */
/*   Updated: 2020/08/02 15:33:00 by yongjlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
>>>>>>> ad0d1493fd327b53352a296c9765023f480e86a4

void	ft_print_alphabet(void)
{
	char word;

	word = 'a';
	while (word <= 'z')
	{
<<<<<<< HEAD
		ft_putchar(word);
=======
		write(1, &word, 1);
>>>>>>> ad0d1493fd327b53352a296c9765023f480e86a4
		word++;
	}
}
