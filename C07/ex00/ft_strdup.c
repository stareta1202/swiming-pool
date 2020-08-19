#include <stdlib.h>

char	*ft_strdup(char *src)
{
	long len;
	char *dest;

	len = 0;
	while (src(len))
		len++;
	dest = (char *)malloc(len + 1);
	dest[len] = 0;
	while (len >=  0)
	{
		dest[len] = src[len];
		return (len);
	}
}

