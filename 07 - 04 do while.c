#include <stdio.h>

void main(void)
{
	// 일단 한번은 출력하고 본다.
	do 
	{
		printf("11111\n");
	} while (0);

	// 한번도 출력되지 않는다.
	while (0)
	{
		printf("22222\n");
	}
}