#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//����10��ֵ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//���
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//��ӡ����ʮ��Ԫ�صĵ�ַ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("arr[%d] = %p\n", i, &arr[i]);
//	}//һά�������ڴ�����������ŵ�
//	return 0;
//}
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//printf("%d\n", sizeof(arr));//������������Ĵ�С����λ���ֽ�
//	//printf("%d\n", sizeof(arr[0]));
//	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//���Ԫ�ظ���
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main(void)
//{
//	//int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };//��ȫ��ʼ��
//	//int arr[3][5] = { 1,2,3,4,5,6,7,8 };
//	//1 2 3 4 5 
//	//6 7 8 0 0
//	//0 0 0 0 0 
//    //��ά���������ʼ���ˣ��п���ʡ�ԣ��в���ʡ��
//	int arr[][5] = { {1,2},{3,4},{5,6} };
//	//1 2 0 0 0 
//	//3 4 0 0 0 
//	//5 6 0 0 0 
//	//��ά����������ж��Ǵ�0��ʼ��
// printf("%d\n", arr[2][4]);
//	return 0;
//}
//int main(void)
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	int i = 0;//��
//	int j = 0;//��
//
//	//����
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr[i][j]);//һ��Ԫ��
//		}
//	}
//	//�����Ŀ���
//	for (i = 0; i < 3; i++)
//	{
//		//��ӡһ��
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);//��ӡһ��Ԫ��
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main(void)
//{
//	int arr[3][5] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			//һ������ռ�ĸ��ֽ�
//			printf("&arr[%d][%d] = %p\n", i, j, arr[i][j]);
//			//��ά�������ڴ���Ҳ��������ŵ�
//		}
//	}
//	return 0;
//}
//int main(void)
//{
//	int arr1[10] = { 0 };
//	int arr2[3][5] = { 0 };
//	
//	int n = 10;
//	int arr3[n];
//	return 0;
//}
int main(void)
{
	char arr1[] = "welcome to bit!!!!!!!!!";
	char arr2[] = "#######################";
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
	             //�����ܳ���/һ��Ԫ�س��� = Ԫ�ظ�������-2
	//int right = sizeof(arr1) - 2;(��Ϊ�ַ���������ÿ��Ԫ�س���Ϊ1��������������Ͳ�����)
	int right = strlen(arr1) - 1;


	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(500);//����1000����
		system("cls");//ִ��ϵͳ����
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}