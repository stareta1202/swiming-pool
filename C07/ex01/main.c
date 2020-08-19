#include <stdio.h>

int *ft_range(int min, int max);

int main()
{
	int min = 1;
	int max = 10;
	int *result = ft_range(min, max);
	int i = 0;
	
	while (i < max - min)
		printf("%d ", result[i++]);
	printf("\n");
	return (0);
}
