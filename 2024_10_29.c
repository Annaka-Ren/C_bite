#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//void print_arr(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main(void)
//{
//	int i = 0; int arr[10] = { 0 };
//	//给数组赋值
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i + 1;
//	}
//	//打印数组的内容
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int num = 100;
//	char c = 'w';
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//	    arr[i] = i;
//    }
//return 0;
//}
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	
//	printf("%d\n", rsum);
//	return 0;
//}

//main也是函数，在main函数中调用了main函数，这就是递归
//这个程序最终会崩溃
//这个代码是递归的，但是是递归的一种错误的写法
//Stack overflow栈溢出
//任何一次函数调用，都会申请资源
//申请的是内存资源(内存中栈区的资源)
//int main(void)
//{
//	printf("hehe\n");
//	//........
//	// ........
//	main();//函数可以实现递归，但是不能无限制的递归
//	return 0;
//}

//一个正整数的阶乘是所有小于及等于该数的正整数的积，并且0的阶乘为1
//自然数的阶乘为写作n!
//题目：计算n的阶乘（不考虑溢出），n的阶乘就是1~n的数字累积相乘

//int fac(int n)
//{
//	if (n == 0)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = fac(n);//给的n一定是>=0
//	printf("%d\n", r);
//	return 0;
//}



//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	while (n)
//	{
//		printf("%d ", n % 10);
//		n /= 10;
//	}
//	return 0;
//}

//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);//1 2 3 4
//	}
//	printf("%d ", n % 10);
//	
//}
//
//
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	Print(n);//Print可以将n的每一位按照顺序打印在屏幕上
//	return 0;
//}

//1.大事化小
//2.递归的条件：
//得有跳出条件
//逼近跳出条件 

//计算n的阶乘——循环方法(循环是迭代的一种)
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = fac(n);//给的n一定是>=0
//	printf("%d\n", r);
//	return 0;
//}


//求第n个斐波那契数
//int count = 0;
//
//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//
//}
//
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Fib(n);//3
//	printf("%d\n", r);
//	//仅仅是在计算第3个斐波那契数时，就计算了39088169次
//	printf("count = %d", count);
//	return 0;
//}
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main(void)
{
	int n = 0;
	scanf("%d", &n);
	int r = Fib(n);//40
//在计算第40个斐波那契数的时候
	printf("%d\n", r);
	return 0;
}