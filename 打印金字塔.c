#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	char d = 0;
	printf("��ӡͼ��һ:\n");
	for (j = 0; j < 4; j++) {
		for (i = 0; i < 4 - j; i++) {
			printf(" ");
		}
		d = 65;
		for (i = 0; i < 2 * j + 1; i++) {
			printf("%c", d++);
		}
		printf("\n");
	}
	printf("��ӡͼ���:\n");
	for (j = 0; j < 4; j++) {
		for (i = 0; i < 4 - j; i++) {
			printf(" ");
		}
		d = 65;
		for (i = 0; i < 2 * j + 1; i++) {
			printf("%c", 65 + j);
		}
		printf("\n");
	}
	printf("��ӡͼ����:\n");
	for (j = 0; j < 4; j++) {
		for (i = 0; i < 4 - j; i++) {
			printf(" ");
		}
		d = 65;
		for (i = 0; i < 2 * j + 1; i++) {
			printf("%c", 68 - j);
		}
		printf("\n");
	}
	return 0;
}