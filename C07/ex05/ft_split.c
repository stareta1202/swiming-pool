#include <stdlib.h>

int		is_in_charset(char c, char *charset)
{
	while(*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

long long	get_word_cnt(char *str, char *charset)
{
	long long cnt;

	cnt = 0;
	while (*str)
	{
		if (!is_in_charset(*str, charset))
		{
			cnt++;
			while (*str && !is_in_charset(*str, charset))
				str++;
		}
		str++;
	}
	return (cnt);
}

void		ft_strcpy(char *dest, char *src, char *end)
{
	while(src < end)
		*(dest++) = *(src++);
	*dest = 0;
}

char		**ft_split(char *str, char *charset)
{
	char		**result;
	long long	index;
	char		*src;

	result = (char**)malloc(sizeof(char*) * get_word_cnt(str, charset) + 1);
	index = 0;
	while (*str)
	{
		if (!is_in_charset(*str, charset))
		{
			src = str;
			while (*str && !is_in_charset(*str, charset))
				str++;
			result[index] = (char*)malloc(str - src + 1);
			ft_strcpy(result[index++], src, str);
		}
		str++;
	}
	result[index] = 0;
	return (result);
}
