#include <stdio.h>

void main(void)
{
	char str[20] = "Hello World";
	
	// W������ �ι��ڸ� �־ ���ڿ��� ����
	str[7] = '\0';
	printf("%s", str);
}