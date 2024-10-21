#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//输入10个值
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//输出
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//打印数组十个元素的地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("arr[%d] = %p\n", i, &arr[i]);
//	}//一维数组在内存中是连续存放的
//	return 0;
//}
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//printf("%d\n", sizeof(arr));//计算整个数组的大小，单位是字节
//	//printf("%d\n", sizeof(arr[0]));
//	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//获得元素个数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main(void)
//{
//	//int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };//完全初始化
//	//int arr[3][5] = { 1,2,3,4,5,6,7,8 };
//	//1 2 3 4 5 
//	//6 7 8 0 0
//	//0 0 0 0 0 
//    //二维数组如果初始化了，行可以省略，列不能省略
//	int arr[][5] = { {1,2},{3,4},{5,6} };
//	//1 2 0 0 0 
//	//3 4 0 0 0 
//	//5 6 0 0 0 
//	//二维数组的行与列都是从0开始的
// printf("%d\n", arr[2][4]);
//	return 0;
//}
//int main(void)
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	int i = 0;//行
//	int j = 0;//列
//
//	//输入
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr[i][j]);//一个元素
//		}
//	}
//	//行数的控制
//	for (i = 0; i < 3; i++)
//	{
//		//打印一行
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);//打印一个元素
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
//			//一个整形占四个字节
//			printf("&arr[%d][%d] = %p\n", i, j, arr[i][j]);
//			//二维数组在内存中也是连续存放的
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
	             //数组总长度/一个元素长度 = 元素个数，再-2
	//int right = sizeof(arr1) - 2;(因为字符类型数组每个元素长度为1，换成整型数组就不行了)
	int right = strlen(arr1) - 1;


	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(500);//休眠1000毫秒
		system("cls");//执行系统命令
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}