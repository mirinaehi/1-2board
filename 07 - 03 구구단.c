#include <stdio.h>

void main(void)
{
	int dan = 2;

	int i = 1;
	while (i <= 9)
	{
		printf("%d X %d = %d\n", dan, i, dan * i);
		i++;
	}

}