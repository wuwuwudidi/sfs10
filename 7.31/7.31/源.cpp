#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<assert.h>
#include<string.h>
#include <math.h>
//void reverse(char *str)//�ַ�������
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
//	gets(arr);//��ȡһ��
//	reverse(arr);
//
//	printf("%s\n", arr);
//
//	return 0;
//}
//
//int main()
//{//���� 2 22 222 2222 ��ӵĺ�
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
//		//�ж�i�Ƿ�Ϊˮ�ɻ���
//		//1����i��λ��-nλ��
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2 ����i��ÿһλ��n�η�֮�� sum
//		tmp = i;
//		while (tmp)
//		{
//			sum +=  pow((double)(tmp % 10), n);
//			tmp /= 10;
//		}
//		
//		//3 �Ƚ�i==sum
//		if (i == sum)
//		{
//			printf(" %d ", i);
//		}
//	}
//	return 0;
//}
//��ӡ����
//int main()
//{
//	int i = 0;
//	int line = 0;
//	scanf("%d", &line);
//	
//	for ( i = 0; i < line;i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j<2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//����ˮ
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