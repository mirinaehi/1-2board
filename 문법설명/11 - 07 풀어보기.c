#include <stdio.h>


void main(void)
{

	// ����(int), ����(char), 8����Ʈ �ε��Ҽ�(double) ������
	int a;
	char b;
	double c;

	// ������ ����Ű�� �����͸� �����ϰ� ����Ű�ÿ�.
	int* ptrA = &a;
	char* ptrB = &b;
	double* ptrC = &c;
	
	// ������ ������ �����ͺ����� �޸𸮿��� �����ϴ� ũ�⸦ �˾ƺ��ÿ�
	printf("%d %d %d\n", sizeof(a), sizeof(b), sizeof(c));	// �Ϲݺ���
	printf("%d %d %d\n", sizeof(ptrA), sizeof(ptrB), sizeof(ptrC));  // �����ͺ���



}
