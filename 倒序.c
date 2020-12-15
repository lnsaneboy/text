#include <stdio.h>
void Init(int arr[], int sz)
{
	int i = 0;
	printf("请输入十个数字:\n");
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}
}
void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void Reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz-1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Init(arr, sz);//数组初始化
	Reverse(arr, sz);//倒序
	Print(arr, sz);//打印
	return 0;
}