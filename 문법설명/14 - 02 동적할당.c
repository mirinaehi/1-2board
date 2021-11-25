#include <stdio.h>

void main(void)
{
	int count;	// 지역변수(stack 영역에 할당)
	printf("원하는 int공간의 갯수를 입력하시오 : ");
	scanf("%d", &count);

	// 키보드 입력과정은 프로그램 실행속에 진행됨
	// malloc으로 할당된 메모리 크기는 키보드로 입력한 순간에 결정
	int* ptr = malloc(sizeof(int) * count);

}
