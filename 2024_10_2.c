#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//int main(void)//0的二进制位原码→所有位包括符号位按位取反→
////→得到0的二进制位补码→转换为十进制输出-1
////
//{
//	int a = 0;//整数在内存中存储的是补码,第一位表示符号位
//	//一个整数的二进制表示有三种
//	//整型变量4个字节，一个字节8比特位
//	// 整数a
//	// 0
//	// 二进制：
//	// 00000000000000000000000000000000
//	// 11111111111111111111111111111111    ~a
//	//按位取反所有位都变
//	printf("%d\n", ~a);
//    //~按位取反//按二进制位取反-把所有二进制位中数字，1变成0，0变成1
//	return 0;
//}
//int main(void)
//{
//	//int a = 10;
//	//int b = a++;
//
//	//printf("%d\n", b);//11
//	//printf("%d\n", a);//11
//
//	//int b = ++a;//前置++   - 先++再使用
//	//++a先自增在输出a的值，a++先输出a的值再自增
//	//printf("%d\n", b);//11
//	//printf("%d\n", a);//11
//	return 0;

//&&逻辑与||逻辑或-----逻辑操作符
//int main(void)
//{
//	//强制类型转换（不推荐使用但是这种语法存在）
//	int a = (int)3.14;
//
//	printf("%d\n", a);
//	return 0;
//}
//int main(void)
//{
//	int a = 1;
//	int b = 2;
//	int c = a || b;
//	printf("%d\n", c);
//	/*int c = a && b;
//	printf("%d\n", c);*/
//	//if (a && b)//&&:并且--两边同时为真时,结果为真
//	//{//0为假
//	//}
//
//	return 0;
//}

//条件操作符（三目操作符）exp1 ? exp2 : exp
//若exp1 成立，exp2计算，整个表达式的结构是：exp2的结果
//若exp1 不成立，exp3计算，整个表达式的结构是：exp3的结果
//int main(void)
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//
//	max = a > b ? a : b;
//	printf("%d\n", max);
//	return 0;
//}
//int main(void)//逗号表达式：逗号隔开的一串表达式
//{
//	//(2, 4 + 5, 6);
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	        //a = 5     c = 1       b = 3
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//逗号表达式是从左向右依次计算的
//	//整个表达式的结果是最后一个表达式的结果
//	printf("%d\n", d);
//	return 0;
//}
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//            [ 0,1,2,3,4,5,6,7,8,9  ]
//	int i = 9;
//	do
//	{
//		printf("%d\n", arr[i]);//[下标引用操作符]
//		i--;
//	}while (i >= 0);
//	
//	return 0;
//}

////函数调用操作符
//int main(void)
//{
//	//调用函数的时候，函数名称后边的（）就是函数调用操作符
//	printf("hehe\n");
//	printf("%d", 100);
//
//	return 0;
//}
int main(void)
{
	int n = 0;
	do
	{
		printf("正在缓冲%d%%\n", n);
		n++;
	} while (n < 101);
	printf("成功启动！");
	int grade;
	printf("请输入您de实况体温：");
	scanf("%d", &grade);

	if (grade <= 100)
	{
		grade = grade / 10;
		if (grade == 4 || grade == 5)
		{
			printf("已红温");
		}
		else if (grade == 3)
		{
			printf("居然没红温？");
		}
		else if (grade == 2)
		{
			printf("救护车！救护车！");
		}
		else if (grade == 1 || grade == 0)
		{
			printf("尸体凉凉的");
		}
		else
		{
			printf("啊！屏幕被灼伤了！");
		}

	}
	else
	{
		printf("怎么敢输的这么离谱？让你知道什么是黑手！");
	}
	return 0;
}