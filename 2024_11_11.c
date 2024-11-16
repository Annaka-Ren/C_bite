#define _CRT_SECURE_NO_WARNINGS 1

#include<stdlib.h>
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）。
//#define MONEY 20
//int money = MONEY;
//int pin = 0;
//int r_pin = 0;
//void pay()
//{
//	while (money > 0)
//	{
//		money--;
//		pin++;
//		r_pin = pin;
//	}
//	
//	while (pin >= 2 )
//	{
//		pin -= 2;
//		r_pin++;
//		pin++;
//	}
//}
//int main(void)
//{
//	while (money > 0 ||pin >= 2 )
//	{
//		pay();
//	}
//	printf("能喝 %d 瓶汽水", r_pin);
//	return 0;
//}
//#define N 13
//
//void print(char space[N]);
//void exchange(char space1[N], char space[N]);
//
//void exchange(char space1[N], char space[N])
//{
//    int mid = N / 2; // 中间锚点
//    for (int i = 0; i <= mid; i++) // 处理上半部分
//    {
//         //设置空格和星号的位置
//        for (int j = 0; j < N; j++) {
//            space[j] = ' '; // 初始化为空格
//        }
//
//         //根据行号填充星号
//        for (int j = mid - i; j <= mid + i; j++) {
//            space[j] = '*'; // 填充星号
//        }
//
//        print(space); // 打印当前行
//    }
//
//    for (int i = mid - 1; i >= 0; i--) // 处理下半部分
//    {
//         //设置空格和星号的位置
//        for (int j = 0; j < N; j++) {
//            space[j] = ' '; // 初始化为空格
//        }
//
//         //根据行号填充星号
//        for (int j = mid - i; j <= mid + i; j++) {
//            space[j] = '*'; // 填充星号
//        }
//
//        print(space); // 打印当前行
//    }
//}
//
//void print(char space[N]) // 打印菱形
//{
//    for (int j = 0; j < N; j++)
//    {
//        printf("%c", space[j]);
//    }
//    printf("\n");
//}
//
//int main(void)
//{
//    char space[N] = { 0 }; // 空格层
//    for (int i = 0; i < N; i++) {
//        space[i] = ' '; // 确保整个数组都是空格
//    }
//    exchange(space, space);
//
//    return 0;
//}

//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//#define N 100000
//#define M 6
////函数声明
//int digit(int n);
//void digitsOfNumber(int n, int digit1[]);
//int Narcissistic(int count, int digit1[], int n);
//void print(int arr[], int size);
////函数的定义
//int digit(int n)//算位数
//{
//	int count = 0;
//	while (n != 0) 
//	{
//		n /= 10;
//		count++;
//	}
//	return count;
//}
////函数用于将数字的每一位存入数组
//void digitsOfNumber(int n, int digit1[]) 
//{
//	int i = 0;
//	// 处理负数情况
//	n = (n < 0) ? -n : n;
//
//	// 特殊情况，当n为0时，直接存入数组
//	if (n == 0) 
//	{
//		digit1[0] = 0;
//		return;
//	}
//
//	// 循环直到n为0
//	while (n != 0)
//	{
//		digit1[i] = n % 10; // 取出最后一位数字
//		n /= 10;         // 移除最后一位数字
//		i++;             // 移动到下一位
//	}
//}//digit1中依次存放n的每一位数字
//int Narcissistic(int count,int digit1[],int n)//位数，每位数，原数
//{
//	//count = digit(n);
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < count; i++)
//	{
//		sum += pow(digit1[i], count);
//	}
//	return sum == n ? 1 : 0;
//	/*if (sum == n)
//		return n;
//	else
//		return 0;*/
//}
//void print(int arr[], int size) 
//{
//	for (int i = 0; i < size; i++) 
//	{
//		int digit1[M] = { 0 };
//		digitsOfNumber(arr[i], digit1);
//		if (Narcissistic(digit(arr[i]), digit1, arr[i])) 
//		{
//			printf("%d\n", arr[i]);
//		}
//	}
//}
//int main(void)
//{
//	int arr[N] = { 0 };
//	for (int i = 0; i < N; i++)//将数组初始化为1-100000
//	{//已知0不是正整数（没有位数），水仙花数要求为正整数
//		arr[i] = i+1;
//	}
//	print(arr,N);
//	return 0;
//}

//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//#define N 5
//int sum(int a)
//{
//	int b = a;
//	int Sn = 0;
//	for (int i = 0; i < N; i++)
//	{
//		Sn += b;
//		b = b * 10 + a;
//	}
//	return Sn;
//}
//int main(void)
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("Sn = %d", sum(a));
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#define N 10
//void ExchangeMin(int min, int n, int arr[N])
//{
//    int term = 0;
//    term = arr[min];
//    arr[min] = arr[0];
//    arr[0] = term;
//}
//void ExchangeMax(int max, int n, int arr[N])
//{
//    int term = 0;
//    term = arr[max];
//    arr[max] = arr[n - 1];
//    arr[n - 1] = term;
//}
//void Find_Min_Max(int n, int arr[N])
//{
//    int i = 0;
//    int min = 0;
//    int max = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (arr[min] > arr[i])
//        {
//            min = i;
//        }
//    }
//    ExchangeMin(min, n, arr);
//    for (i = 0; i < n; i++)
//    {
//        
//        if (arr[max] < arr[i])
//        {
//            max = i;
//        }
//    }
//    ExchangeMax(max, n, arr);
//}
////5
////9 5 2 1 6
//int main(void)
//{
//    int i = 0;
//    int n = 0;
//    int arr[N] = { 0 };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    Find_Min_Max(n, arr);
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//
//}
#include<stdio.h>
#include<string.h>
#define N 10
//void Sorting(int n, int arr[N])
//{
//    int i = 0;
//    int j = 0;
//    int max = 0;
//    int good[N] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (arr[max] <= arr[j])
//            {
//                max = j;
//            }
//        }
//        good[i] = arr[max];
//        arr[max] = 0;
//    }
//    for (i = 0; i < n; i++)
//    {
//        arr[i] = good[i];
//    }
//}
// void Sorting(int n, int arr[N]) {
void Sorting(int n, int arr[N]) 
{
    int i = 0;
    int j = 0;
    int max_index = 0;
    for (i = 0; i < n - 1; i++) 
    { // 只需要循环到倒数第二个元素
        max_index = i;
        for (j = i + 1; j < n; j++) 
        {
            if (arr[j] > arr[max_index])
            {
                max_index = j;
            }
        }
        if (max_index != i) 
        { // 如果找到的最大值不是当前位置，交换它们
            int temp = arr[i];
            arr[i] = arr[max_index];
            arr[max_index] = temp;
        }
    }
}
//6
//53 23 1 2 - 9 0
int main(void)
{
    int i = 0;
    int n = 0;
    int arr[N] = { 0 };
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    Sorting(n, arr);
    for (i = 0; i < n; i++)
    {
        if (i == (n - 1))
        {
            printf("%d", arr[i]);
            break;
        }
        printf("%d ", arr[i]);
    }
    return 0;

}