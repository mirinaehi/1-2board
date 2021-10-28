#include <stdio.h>

void Swap(int* num1, int* num2);

void main(void)
{
	int a = 10, b = 20;
	printf("변경 전 a:%d b:%d \n", a, b);
	Swap(&a, &b);
	printf("변경 후 a:%d b:%d \n", a, b);
}

void Swap(int* num1, int* num2)
{
	int temp;
	//printf("%d %d %p %p %p %p\n", *num1, *num2, num1, num2, &num1, &num2);
	
	temp = *num1;	// temp : 10
	*num1 = *num2;	// a : 20
	*num2 = temp;	// b : 10
}
