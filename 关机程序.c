//���ƹػ�����
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char input[20] = { 0 };//��������
	//system()����ִ��ϵͳ�ػ�����
	system("shutdown -s -t 60");//�ػ�
again:
	printf("��ĵ��Խ���1�����ڹػ���ȡ���ػ�������:�ְ�\n");
	scanf("%s",&input);
	if (strcmp(input, "�ְ�") == 0)//�ж�input�д�ŵ��ǲ��ǡ��ְ֡�
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}