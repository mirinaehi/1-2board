#include <stdio.h>


void main(void)
{
	int i = 1;
	char c = 2;
	double b = 3.0;

	int* pi = &i;
	char* pc = &c;
	double* pb = &b;

	printf("%p %p %p \n", pi, pc, pb);
	// �����Ϳ� 1�� ���Ҷ����� �����ϴ� ����� �޸�ũ�⸸ŭ �����Ѵ�
	// pi�� 4��(int) ����, pc�� 1��(char), pb�� 8��(double) ����
	printf("%p %p %p \n", pi+1, pc+1, pb+1);
	printf("%p %p %p \n", &i+1, &c+1, &b+1);

	printf("%d %d %lf \n", i, c, b);
	printf("%d %d %lf \n", i + 1, c + 1, b + 1.0);
}
