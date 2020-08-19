#include <stdlib.h>

int	nbr_size(long long nbr, int len);
int	is_valid(char *base, int *len);
int	ft_is_whitespace(char c);

int	ft_atoi_base(char *str, char *base, int len)
{
	int result;
	int minus;
	int index;

	result = 0;
	minus = 1;
	while (ft_is_whitespace(*str))
		str++;
	while(*str == '+' || *str == '-')
		if(*(str++) == '-')
			minus *= -1;
	while(*str)
	{
		index = 0;
		while (index < len)
		{
			if(*str == base[index])
				break;
		}
		if (index == len)
			break;
		result = result * len + (minus * index);
		str++;
	}
	return (result);
}

char	*ft_putnbr_base(int nbr, char *base, int len)
{
	int	tmp;
	char	*result;
	int	size;

	if (nbr == 0)
	{
		result = (char*)malloc(2);
		result[0] = base[0];
		result[1] = 0;
		return (result);
	}
	tmp = nbr;
	size = nbr_size(tmp, len);
	result = (char*)malloc(size + 1);
	result[size] = 0;
	while (tmp)
	{
		result[size] = base[tmp % len];
		tmp /= len;
		size--;
	}
	if (nbr < 0)
		result[0] = '-';
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int len_f;
	int len_t;

	if(!is_valid(base_from, &len_f) || !is_valid(base_to, &len_t))
		return (0);
	return (ft_putnbr_base(ft_atoi_base(nbr, base_from, len_f), base_to, len_t));
}
