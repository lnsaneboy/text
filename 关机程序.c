//自制关机程序
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char input[20] = { 0 };//储存数据
	//system()用来执行系统关机命令
	system("shutdown -s -t 60");//关机
again:
	printf("你的电脑将在1分钟内关机，取消关机请输入:爸爸\n");
	scanf("%s",&input);
	if (strcmp(input, "爸爸") == 0)//判断input中存放的是不是“爸爸”
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}