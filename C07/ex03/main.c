#include <stdlib.h>
#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main()
{
	char *strs[5] = {"123", "abc", "def", "456", "ABC"};
	
	char sep[] = "+";
	char *result = ft_strjoin(0, strs, sep);
	printf("%p\n%s\n", result, result);

	return(0);
}
