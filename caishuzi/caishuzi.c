#define _CRT_SECURE_NO_WARNINGS 1
//2020/11/13
//��������Ϸ
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("*************************************\n");
	printf("*********  1.play   0.exit  *********\n");
	printf("*************************************\n");
}
void game()
{
	int random_num = rand() % 100 + 1;//������0��100�������
	int input = 0;
	while (1)
	{
		printf("������Ҫ�µ�����:");
		scanf("%d", &input);
		if (input > random_num)
		{
			printf("�´���\n");
		}
		else if (input < random_num)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));//�������� rand() ���������ʱ�����������
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("ѡ��������������룡\n");
			break;
		}
	} while (input);
	return 0;
}