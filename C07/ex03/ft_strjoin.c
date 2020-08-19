#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int	len;
	int	i;
	char	*tmp;

	len = 0;
	i = 0;
	if(!size)
	{
		result = (char*)malloc(1);
		return (result);
	}
	while (i < size)
		len = ft_strlen(strs[i++]);
	result = (char*)malloc(len + (size - 1) * ft_strlen(sep) + 1);
	tmp = ft_strcat(result, strs[0]);
	i = 1;
	while (i < size)
	{
		tmp = ft_strcat(tmp, sep);
		tmp = ft_strcat(tmp, strs[i++]);
	}
	tmp[i] = 0;
	return (result);
}	
	
