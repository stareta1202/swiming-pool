#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int len;
	int *tmp;
	int i;
	int result;
	
	i = 0;
	len = max - min;
	if (len <= 0)
		return (0);
	*range = (int*)malloc(sizeof(int) * (len));
	while (i < len)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (len);
}
	
