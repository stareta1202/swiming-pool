#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *result;

	i = 0;
	if (min >= max)
		return (0);
	result = (int *)malloc(sizeof(int) * (max - min));
	while ( i < max - min)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
