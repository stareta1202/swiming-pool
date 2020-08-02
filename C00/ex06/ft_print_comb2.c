/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongjlee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 21:48:30 by yongjlee          #+#    #+#             */
/*   Updated: 2020/08/02 21:50:49 by yongjlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_ascend(int first, int second)
{
	ft_putchar(first / 10 + 48);
	ft_putchar(first % 10 + 48);
	ft_putchar(' ');
	ft_putchar(second / 10 + 48);
	ft_putchar(second % 10 + 48);
	if (!(first == 98 && second == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int number[2];

	number[0] = 0;
	while (number[0] <= 99)
	{
		number[1] = number[0] + 1;
		while (number[1] <= 99)
		{
			ft_print_ascend(number[0], number[1]);
			number[1]++;
		}
		number[0]++;
	}
}
