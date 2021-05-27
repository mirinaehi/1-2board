/*
*	������� ����� 21.05.13
*	1. ��ü ĭ�� ���� 61��
*	2. �÷��̾ ������ �־�� �� ��
*		- ��ġ����(��) : 0 ���� ����
*		- �� : 5,000,000 ���� ����
*		- ������ �κ��丮 (���߿� �����ϸ�)
*	3. �Ļ��� ����
*		- 0���� ���ڸ��� �Ļ�
*	4. �Ϸ�����
*		- ���� 61��° ��ġ���� �־�� �Ѵ�
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
	//ĭ�� �ִ밹��, ����� ����(����)
	const int MAX_LENGTH = 61;
	
	//�÷��̾��� ��ġ
	int position = 0;

	//�ֻ���
	int dice;

	int money = 5000000;

	srand(time(0));
	rand();

	printf("������ġ : %d, ���� �� : %d\n\n", position, money);

	while (1)
	{
		getchar();		// �ֻ����� ������ ���ؼ��� ����Ű�� ������ �Ѵ�.
		//�ֻ��� ������ (1���� 6����)
		dice = rand() % 6 + 1;
		position += dice;
		printf("�ֻ����� ������ %d�� ���Խ��ϴ�.\n", dice);
		printf("������ġ : %d, ���� �� : %d\n\n", position, money);

		// 7���� �������� 3������ �̵�
		if (position == 7)
		{
			printf("3�� ��ġ�� �̵��մϴ�.\n");
			position = 3;
			printf("������ġ : %d, ���� �� : %d\n\n", position, money);
		}

		if (position == 15)
		{
			printf("�ֽ��� ������ 200������ �����˴ϴ�.\n");
			money -= 2000000;
			printf("������ġ : %d, ���� �� : %d\n\n", position, money);
		}

		if (position > MAX_LENGTH)
		{
			printf("%d�� �Ѿ��� ������ ��ȿó�� �մϴ�.\n", MAX_LENGTH);
			// ��ȿó���� �ϱ����� �ڵ�
			position -= dice;
			printf("������ġ : %d, ���� �� : %d\n\n", position, money);
		}

		//// ������ ������ �ó�����
		// �Ļ�ó��
		if (money <= 0)
		{
			printf("�Ļ� �Ͽ����ϴ٤ФФ�\n");
			break;
		}

		// 61 ��ġ���� �־�� ������ ������.
		if (position == MAX_LENGTH)
		{
			printf("�����մϴ�. �������� �����Ͽ����ϴ�.\n");
			break;
		}
		////
	} // while�� ��
	printf("������ �������ϴ�.");
}