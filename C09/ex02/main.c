
#include <stdio.h>

char **ft_split(char *str, char *charset);

int main()
{
	char **a = ft_split("LsLUoqPh7tZbnmRfRq3uhKMMnY6EEW6zAiXA", "");
	for(int i = 0; i < 11111; i++)
	{
		if(a[i] == 0)
			break;
		printf("[%s]\n", a[i]);
	}
}
