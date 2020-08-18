#include <stdlib.h>
#include "ft_stock_str.h"

int	get_str_size(char *str)
{
	int len;

	len = 0;
	while(str[len])
		len++;
	return (len);
}

void 	str_cpy(char *dest, char *src)
{
	int i;

	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
}

struct s_stock_str 	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*len;
	int		i;

	len = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!len)
		return (0);
	i = 0;
	while (i < ac)
	{
		len[i].size = get_str_size(av[i]);
		len[i].str = (char*)malloc(len[i].size + 1);
		len[i].copy = (char*)malloc(len[i].size + 1);
		str_cpy(len[i].str, av[i]);
		str_cpy(len[i].copy, av[i]);
		i++;
	}
	len[i].str = 0;
	return (len);
}

	
