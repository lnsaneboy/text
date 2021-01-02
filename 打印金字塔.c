#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	char d = 0;
	printf("打印图像一:\n");
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
	printf("打印图像二:\n");
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
	printf("打印图像三:\n");
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