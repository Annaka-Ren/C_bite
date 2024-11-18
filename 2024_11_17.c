#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int f(float x);
//int main(int argc, char* argv[])
//{
//    float x;
//    scanf("%f", &x);
//    printf("f(%f)=%d", x, f(x));
//    return 0;
//}
//int f(float x)
//{//这题干说的是中文吗？请求中译中！！！
//    int maxInt = (int)x;//小于等于x的最大正整数
//    int minInt = (int)x;//大于x的最小正整数
//    if (maxInt > x)
//    {
//        maxInt -= 1; // 如果转换为整数后大于X，则减1
//    }
//    if (x <= 0)
//    {
//        minInt = 1;
//    }
//    else
//    {
//        // 否则，就是X+1
//        minInt = x + 1;
//    }
//    return((maxInt % 2 != 0) && (minInt % 2 == 0));
//}

//方法一
//int main(void)
//{//计算n的二进制形式中有几个1
//	int count = 0;
//	int n = -1;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)        //不是最优解，不管有几个1都要循环32次
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//按位与有0则0，按位或有1则1，按位异或相同则0，不同则1
//方法二
//n = n&(n-1)    这个表达式会将n的二进制表示中最右边的1去掉
//在n变成0之前， n = n&(n-1)这个表达式能执行几次，就说明n的二进制表示中有几个1
//int main(void)
//{
//	int count = 0;
//	int n = 10;
//	while (n)
//	{
//		count++;
//		n = n & (n - 1);
//	}
//	printf("%d\n", count);    
//	return 0;
//}

//写个代码判断n是否是2的幂次方数？
//思路：n的二进制中只有一个1，就是2的幂次方
//int main(void)
//{
//	int n = 8;
//	if (n & (n - 1) == 0)//去掉一个1之后就是0
//	{
//		printf("是2的幂次方数\n");
//	}
//	return 0;
//}

//练习：将13的二进制的第五位改为1(某一位改成1)
//int main(void)
//{
//	int n = 13;
//	n |= (1 << 4);//（5-1）--> 4
//	printf("%d", n);
//	return 0;
//}

//结构体
//结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量，如：标题、数组、指针，甚至是其他结构体。

//假设要描述一个学生：名字，年龄，性别，学号
//声明的一个结构体类型
//struct Student
//{
//	char name[20];//名字
//	int age;//年龄
//	char sex[6];//性别
//	char id[12];//学号
//}s4, s5, s6;//s4也是一个结构体变量 - 全局
//
//
//struct Student s3;//s3也是一个结构体变量 - 全局
//
//int main(void)
//{
//	struct Student s1;//s1就是一个结构体变量 - 局部
//	struct Student s2;//s2也是一个结构体变量
//	return 0;
//}


//struct Point//坐标
//{
//	int x;
//	int y;
//};
//
//struct Data
//{
//	int d;
//	struct Point p;
//	double t;
//};
//struct Point p1 = {10, 20};
//struct Student
//{
//	char name[20];//名字
//	int age;//年龄
//	char sex[6];//性别
//	char id[20];//学号
//};//s4也是一个结构体变量 - 全局
//
//int main(void)
//{
//	
//	struct Data data = { 100, {100, 200}, 3.14};
//	
//	struct Point p2;
//	/*struct Student s1 = { "张三", 20, "男", "2024101203" };*/
//	//按照默认的顺序初始化
//	struct Student s2 = { .age = 22, .id = "2024020304", .name = "李四", .sex = "男" };
//	//这种方式可以指定顺序
//
//	//printf("%s\n", s1.name);//结构体变量.结构体成员名
//	//s1.age = 18;
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.sex);
//	//printf("%s\n", s1.id);
//	struct Student s1 = { 0 };
//	scanf("%s %d %s %s", s1.name, &(s1.age), s1.sex, s1.id);
//	printf("%s\n", s1.name);//结构体变量.结构体成员名
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.sex);
//	printf("%s\n", s1.id);
//
//	return 0;
//}
// 
//相邻操作符讨论优先级


//#include<stdio.h>
//#define N 100
//int Find_min(int n, int arr[N])
//{
//    int i = 0;
//    int min = 0;
//    for (i = 1; i < n; i++)
//    {
//        if (arr[i] < arr[min])
//        {
//            min = i;
//        }
//
//        return arr[min];
//    }
//}
//int main(void)
//{
//    unsigned int n = 0;
//    int i = 0;
//    int arr[N] = { 0 };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    printf("min = %d", Find_min(n, arr));
//    return 0;
//}
