/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongjlee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 17:17:42 by yongjlee          #+#    #+#             */
/*   Updated: 2020/08/02 20:29:20 by yongjlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char numarr[5];

	numarr[0] = '0';
	numarr[3] = ',';
	numarr[4] = ' ';
	while (numarr[0] <= '7')
	{
		numarr[1] = numarr[0] + 1;
		numarr[2] = numarr[1] + 1;
		while (numarr[1] <= '8')
		{
			numarr[2] = numarr[1] + 1;
			while (numarr[2] <= '9')
			{
				write(1, &numarr[0], 3);
				if (!(numarr[0] == '7' && numarr[1] == '8' && numarr[2] == '9'))
					write(1, &numarr[3], 2);
				numarr[2]++;
			}
			numarr[1]++;
		}
		numarr[0]++;
	}
}
