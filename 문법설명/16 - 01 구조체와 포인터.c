#include <stdio.h>

typedef struct {
	int x;
	int y;
}Point;

void main(void)
{
	// �������� a�� stack������ �Ҵ�ȴ�.
	Point a = { 3, 4 };
	printf("%d %d\n", a.x, a.y);

	Point* ptr = &a;
	// �Ʒ� �� ���� ���� ���̴�.
	printf("%d %d\n", (*ptr).x, (*ptr).y);
	printf("%d %d\n", ptr->x, ptr->y);


}

