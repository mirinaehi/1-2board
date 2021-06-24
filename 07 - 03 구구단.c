#include<stdio.h>

void main(void)
{
	for (int dan = 2; dan <= 9; dan++) // 바깥쪽 for문
	{	
		if (dan == 4)
		{
			break;	// 바깥쪽 for문을 벗어난다
		}
		for (int i = 1; i <= 9; i++) // 안쪽 for문
		{
			if (i == 5)
			{
				continue;	// 안쪽 for문의 한 턴을 쉰다
			}
			printf("%d X %d = %d\n", dan, i, dan * i);
		}
		printf("\n");
	}
}