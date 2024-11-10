#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include <math.h>
//#define N 1000
//#include <stdio.h>
//int main(void)
//{
//    int n = 0, m = 0;
//    int ku = 0;
//    int arr1[N] = { 0 }, arr2[N] = { 0 }, arr3[N] = { 0 };
//    scanf("%d %d", &n, &m);
//    //5 6
//    //    1 3 7 9 22
//    //    2 8 10 17 33 44
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (int j = 0; j < m; j++)
//    {
//        scanf("%d", &arr2[j]);
//    }
//    for (int k = 0; k < (n + m); k++)
//    {
//        if (arr1[k] > arr2[k])
//        {
//            
//            arr3[k] = arr2[k];
//            arr3[k + 1] = arr1[k];
//            k += 1;
//        }
//        else
//        {
//            arr3[k] = arr1[k];
//            arr3[k + 1] = arr2[k];
//            k += 1;
//        }
//        printf("%d ", arr3[k]);
//    }
//    return 0;
//}
//#define N 10
//int sort(int arr[], int left, int right, int flag)
//{
//	int x = 0;
//	if(arr[left]>arr[])
//	return x;
//}
//int main(void)
//{
//	int n = 0;
//	int i = 0, j = 0;
//	int x = 0;
//	int arr[N] = { 0 };
//	scanf("%d", &n);
//	int left = 0, right = (n - 1), flag = n / 2 - 1;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (j = 0; j < n; j++)
//	{
//		sort(arr, left, right, flag);
//		printf("%d", arr[x]);
//	}
//
//	return 0;
//}

////二分查找练习
////写一个二分查找函数
////功能：在一个升序数组中查找指定的数值，找到了就返回下标，找不到就返回 - 1.
//int bin_search(int arr[], int left, int right, int key)
//{
//	// arr 是查找的数组
//    //left 数组的左下标
//    //right 数组的右下标
//    //key 要查找的数字
//    int mid = 0;
//    int find = 0;
//    while (left <= right)
//    {
//        mid = (left + right) / 2;
//        if (arr[mid] > key)
//        {
//            right = mid - 1;        
//        }
//        else if (arr[mid] < key)
//        {
//            left = mid + 1;
//        }
//        else
//        {
//            find = 1;
//            break;
//        }
//    }
//    if (find == 1)
//    {
//        return mid;
//    }
//    else
//    {
//        return -1;
//    }
//}
//#define N 10
//void init(int n,int *arr)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = 0;
//		
//	}
//}
//void print(int n,int *arr)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int n,int *arr)
//{
//	int temp;
//	int left = 0, right = n-1;
//	while (left < right)
//	{
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//
//}
//int main(void)
//{
//	int i = 0;
//	int arr[N];
//	int n = 0;
//	scanf("%d", &n);
//	init(n, arr);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		//尝试输入1 2 3
//	}
//	print(n,arr);
//	reverse(n,arr);
//	print(n,arr);
//	return 0;
//}


////实现一个函数is_prime，判断一个数是不是素数。
////利用上面实现的is_prime函数，打印100到200之间的素数。
//#define N 101
//void init(int n,int *arr)
//{
//	int i = 0;
//	int x = 100;
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = x++;
//	}
//}
//int is_prime(int n) 
//{
//	if (n <= 1) return 0; // 1和负数不是素数
//	if (n == 2) return 1; // 2是素数
//	if (n % 2 == 0) return 0; // 排除偶数
//
//	for (int i = 3; i <= sqrt(n); i += 2) 
//	{
//		if (n % i == 0) 
//		{
//			return 0; // 如果n能被i整除，则n不是素数
//		}
//	}
//	return 1; // 如果没有找到因子，则n是素数
//}
//
//int main(void)
//{
//	int i = 0;
//	int arr[N];
//	init(N, arr);
//	for (i = 0; i < N; i++)
//	{
//		if (is_prime(arr[i]) == 1)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}
//实现函数判断year是不是润年。
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//
//int main(void)
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (is_leap_year(year) == 1)
//		printf("%d年是闰年\n",year);
//	else
//		printf("%d年不是闰年\n", year);
//	return 0;
//}

////实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//
////如：输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
//#define N 20
//void mult_table(int arr[N][N])
//{
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			arr[j][i] = (j+1) * (i+1);
//		}
//	}
//}
//void print(int n,int table[N][N])
//{
//	mult_table(table);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%2d*%2d=%2d  ", i+1, j+1, table[i][j]);	
//		}
//		printf("\n\n");
//	}
//	printf("\n");
//}
//int main(void)
//{
//	int x = 0;
//	int table[N][N];
//	scanf("%d", &x);
//	print(x,table);
//	return 0;
//}
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）。
//#define MONEY 20
//int money = MONEY;
//int pin = 0;
//void tf()
//{
//	while (money > 0)
//	{
//		money--;
//		pin++;
//	}
//	while (pin >= 2 && money < MONEY)
//	{
//		pin -= 2;
//		pin++;
//		money++;
//	}
//}
//int main(void)
//{
//	while (money > 0 || (pin >= 2 && money >= 1))
//	{
//		tf();
//	}
//	printf("能喝 %d 瓶汽水", pin);
//	return 0;
//}