
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main()
{
	int min = 10;
	int max = 10;
	int *result;
	int i = 0;
	int range = ft_ultimate_range(&result, min, max);
	
	printf("%d\n", range);
	while (i < max - min)
		printf("%d ", result[i++]);
	printf("\n");
	return (0);
}
