#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main(void)
//{
//	int len = strlen("abc");//strlen返回的值是size_t类型的
//	printf("%zd\n", len);
//
//	return 0;
//}
//int main(void)
//{
//	printf("%zd\n", strlen("abc"));
//
//	return 0;
//}
//int main(void)
//{
//	//   3          2             1
//	printf("%d", printf("%d", printf("%d", 43)));
//	//printf如果函数运行成功，则返回打印在屏幕上字符的个数
//	return 0;
//}

//如果是闰年返回1，否则返回0
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1; 
//	else
//		return 0;
//}

//int is_leap_year(int y)
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
#include<stdbool.h>
//bool is_leap_year(int y)
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//调用其他模块代码进行测试
//#include "leap.h"//使用自己头文件中声明的函数，使用""
//函数的声明
//int is_leap_year(int y);
//#include "leap.h"
//int main(void)
//{
//	int year = 0;
//	scanf("%d", &year);
//	//判断
//	//函数的使用要保证先声明后使用，只要在使用之前声明就可以
//	if (is_leap_year(year))//函数的调用
//		printf("%d 是闰年\n", year);
//	else
//		printf("%d 不是闰年\n", year);
//	return 0;
//}
////函数的定义（本质上是一种特殊的声明）
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//头文件的包含，本质上就是完成了函数的声明
//导入静态库
//#pragma comment(lib, "leap.lib")


//ststic修饰局部变量

//void test()
//{
//	static int n = 5;
//	n++;
//	printf("%d ", n);
//}
//int main(void)
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		test();
//	}
//	return 0;
//}

//extern是用来声明外部符号的
//extern int g_val;
////int g_val = 2025;
////一个全局变量被static修饰，使得这个全局变量只能在本源文件中使用，不能在其他源文件中使用
//
//void test()
//{
//	printf("2: %d\n", g_val);
//}
//int main(void)
//{
//	printf("1: %d\n", g_val);
//	test();
//	return 0;
//}


//extern int Add(int x, int y);
//int main(void)
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}