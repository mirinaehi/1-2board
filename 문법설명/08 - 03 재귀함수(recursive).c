#include <stdio.h>

int factorial(int cuty_num)
{
	if (cuty_num == 1) {
		return 1;
	}
	return cuty_num * factorial(cuty_num - 1);
}

void main(void)
{
	int a = factorial(6);
	printf("%d", a);
}


// �Լ��� ����ϴ� ����
//#include <stdio.h>
//
//int ���ϱ�(int a)
//{
//	int sum = 0;
//	for (int i = 1; i <= a; i++)
//		sum += i;
//
//	return sum;
//}
//
//
//void main(void)
//{
//	int aa = ���ϱ�(3), bb = ���ϱ�(4), cc = ���ϱ�(2);
//	printf("%d %d %d", aa, bb, cc);
//	
//}