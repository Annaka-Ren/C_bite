#define _CRT_SECURE_NO_WARNINGS 1;
#include<stdio.h>

//���� n�Ľ׳�
//1*2*3...*n
//
//5*4*3*2*1
//int main(void)
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;//ret = ret * i;//
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//����1!+2!+3!+....+10!
//int main(void)
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for (n = 1; n <= 3; n++)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main(void)
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	//��һ�����������в��Ҿ����ĳ������n
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//Ь
//������300����
//1,2,3,4,...err
//1-150 225 ...

//�����㷨���۰����/���ֲ���
int main(void)
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	//��һ�����������в��Ҿ����ĳ������n
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	

	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ��±���%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}