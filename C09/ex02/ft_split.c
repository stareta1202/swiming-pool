#include <stdlib.h>

int			is_in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;;
	}
	return (0);
}

long long	get_word_cnt(char *str, char *charset)
{
	long long cnt;
	int i;

	cnt = 0;
	i = 0;
	while (str[i])
	{
		if (!is_in_charset(str[i], charset))
		{
			cnt++;
			while (str[i] && !is_in_charset(*str, charset))
				i++;
		}
		i++;
	}
	return (cnt);
}

void		ft_strcpy(char *dst, char *from, char *until)
{
	while (from < until)
		*(dst++) = *(from++);
	*dst = 0;
}

char		**ft_split(char *str, char *charset)
{
	char		**result;
	long long	index;
	char		*from;

	result = (char**)malloc(sizeof(char*) * get_word_cnt(str, charset) + 1);
	index = 0;
	while (*str)
	{
		if (!is_in_charset(*str, charset))
		{
			from = str;
			while (*str && !is_in_charset(*str, charset))
				str++;
			result[index] = (char*)malloc(str - from + 1);
			ft_strcpy(result[index++], from, str);
		}
		str++;
	}
	result[index] = 0;
	return (result);
}
