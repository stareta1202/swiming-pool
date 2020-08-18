#include "ft_abs.h"
#include <stdio.h>

int main()
{
	printf("%d, %d\n", 0, ABS(0));
	printf("%d, %d\n", 1, ABS(1));
        printf("%d, %d\n", -1, ABS(-1));
        printf("%d, %d\n", 2147483647, ABS(2147483647));
        printf("%d, %d\n", -2147483648, ABS(-2147483648));
	return (0); 
}
