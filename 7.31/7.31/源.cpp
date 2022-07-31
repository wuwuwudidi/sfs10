#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<assert.h>
#include<string.h>
#include <math.h>
//void reverse(char *str)//字符串逆序
//{
//	assert(str);
//	char *left = str;
//	int len =strlen(str);
//	char* right = str + len - 1;
//
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[255] = { 0 };
//	scanf("%s", arr);
//	gets(arr);//获取一行
//	reverse(arr);
//
//	printf("%s\n", arr);
//
//	return 0;
//}
//
//int main()
//{//计算 2 22 222 2222 相加的和
//	int a = 0;
//	int sum = 0;
//	int n = 0;
//	int i = 0;
//	int ret = 0;
//	scanf("%d%d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		ret = 10*ret + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
////
////
////	return 0;
////}
//
//int main()
//{
//	int i = 0;
//	
//	for (i = 0; i <= 100000; i++)
//	{
//		//判断i是否为水仙花数
//		//1计算i的位数-n位数
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2 计算i的每一位的n次方之和 sum
//		tmp = i;
//		while (tmp)
//		{
//			sum +=  pow((double)(tmp % 10), n);
//			tmp /= 10;
//		}
//		
//		//3 比较i==sum
//		if (i == sum)
//		{
//			printf(" %d ", i);
//		}
//	}
//	return 0;
//}
//打印菱形
//int main()
//{
//	int i = 0;
//	int line = 0;
//	scanf("%d", &line);
//	
//	for ( i = 0; i < line;i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j<2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//喝汽水
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	total = money;
//	empty = money;
//
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//
//	}
//	printf("total=%d\n", total);
//	return 0;
//}
void move(int arr[],int sz)
{
	int left = 0;
	int right = 0;
	while (left < right)
	{

		while ((left < right) && arr[left] % 2 == 1)
		{
			left++;
		}
		while ((left < right) && arr[left] % 2 == 0)
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	//printf(..)
	return 0;
}