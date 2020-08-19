int	ft_is_whitespace(char c)
{
	return (c == ' ' || (9 <= c && c <= 13));
}

int	is_valid(char *base, int *len)
{
	int	check[256];
	int	i;
	char	c;

	i = 0;
	while (i < 256)
		check[i++] = 0;
	*len = 0;
	while (base[*len])
	{
		c = base[*len];
		if (check[(int)c] || c == '+' || c == '-' || ft_is_whitespace(c))
			return (0);
		check[(int)c] = 1;
		++*len;
	}
	if (*len <= 1)
		return (0);
	return (1);
}

int	nbr_size(long long nbr, int len)
{
	int result;

	if (!nbr)
		return (1);
	result = 0;
	if (nbr < 0)
		result++;
	while(nbr)
	{
		nbr /= len;
		result++;
	}
	return (result);
}
