//µİ¹é
#include <stdio.h>//Çó´Î·½
double Pow(int m, int n)
{
	//m^n=m*m^(n-1)
	if (n < 0)
		return (1.0 / Pow(m, -n));
	else if (n == 0)
		return 1;
	else
		return m * Pow(m, n - 1);
}
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	double ret = Pow(m, n);
	printf("ret=%lf\n", ret);
	return 0;
}
#include <stdio.h>
int Sum(unsigned int num)
{
	if (num > 9)
		return Sum(num / 10) + num % 10;
	else
		return num;
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	int ret = Sum(num);
	printf("ret=%d\n", ret);
	return 0;
}
#include <stdio.h>//µ¹Ğò
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void reverse(char* arr)
{
	char tmp = arr[0];
	int len = my_strlen(arr);
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';
	if (my_strlen(arr + 1) >= 2)
		reverse(arr + 1);
	arr[len - 1] = tmp;
}
int main()
{
	char arr[] = "abcdefg";
	reverse(arr);
	printf("%s\n", arr);
	return 0;
}
#include <stdio.h>//µ¹Ğò
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void reverse(char arr[])
{
	int left = 0;
	int right = my_strlen(arr)-1;
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
	char arr[] = "abcdefg";
	reverse(arr);
	printf("%s\n", arr);
	return 0;
}