#include <stdio.h>


void main(void)
{

	// 정수(int), 문자(char), 8바이트 부동소수(double) 변수를
	int a;
	char b;
	double c;

	// 변수를 가리키는 포인터를 선언하고 가리키시오.
	int* ptrA = &a;
	char* ptrB = &b;
	double* ptrC = &c;
	
	// 각각의 변수와 포인터변수가 메모리에서 차지하는 크기를 알아보시오
	printf("%d %d %d\n", sizeof(a), sizeof(b), sizeof(c));	// 일반변수
	printf("%d %d %d\n", sizeof(ptrA), sizeof(ptrB), sizeof(ptrC));  // 포인터변수



}
