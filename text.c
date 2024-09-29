//int main()
//{
//	字符类型
//	char ch = 'a';
//	整型
//	int age = 20;
//	短整型
//	short num = 10;
//	长整型long
//	long long
//
//	单精度浮点型
//	float weight = 55.5;
//	双精度浮点型
//	double d = 0.0;
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
//放在代码第一行
#include <stdio.h>
//int main()
//{
	//printf("hello\n");
	//printf("hele\n");
	//printf("%d\n",100);//打印一个整数-%d
	///*printf("%d\n", sizeof(char));
	//printf("%d\n", sizeof(short));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(long));
	//printf("%d\n", sizeof(long long));
	//printf("%d\n", sizeof(float));
	//printf("%d\n", sizeof(double));
	//return 0;
//}

//int main()
//{
//	//创建的一个变量
//	//类型  变量名字 = 0；//推荐
//	//类型  变量名字;//不推荐
// int age = 20;
// double weight = 58.9;
//
//
// age = age + 1;
// weight = weight - 10;
// printf("%d\n",age);
// printf("%lf\n",weight);
//
// return 0;
//}

//%d - 整型（十进制数）
//%f - float
//%lf - double
// 
// 
//全局变量 - {}外部定义的
//int a = 100;
//
//int main()
//{
//	//局部变量 - {}内部定义的
//	//当局部变量和全局变量名字冲突的情况下，局部优先（不是最近优先）
//	//不建议:把局部变量和全局变量的名字写成一样的
//	int a = 10;
//	printf("%d\n", a);
//
//	return 0;
//}


//写一个代码求两个整数的和
//scanf函数是输入函数,printf是输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum  = a + b;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//int main()
//{
//	int n = 152;
//	int g = n % 10;
//	int s = n / 10 % 10;
//	int b = n / 100;
//	printf("152 = 个位数字: %d + 十位数字:%d*10 + 百位数字:%d*100\n", g,s,b);
//	return 0;
//}

//int main()
//{
//	double g, t, height;
//
//	g = 10;
//	t = 3;
//	height = g / 2 * t * t;
//	printf("height = %.2f\n", height);
//	return 0;
//}
//int main()
//{
//	int f;
//	int c;
//	f = 100;
//	c = 5*(f - 32)/ 9;
//	printf("fahr = %d, celsius = %d\n",f,c);
//
//	return 0;
//}
//int main(void)
//{
//	int a;
//	int b;
//	scanf("%d %d", & a, &b);
//	printf("Hello, %d and %d!\n",a, b);
//	return 0;
//}
//int main(void)
//{
//	int a, b, c, d, e, f, g;
//	scanf("%d %d", &a, &b);
//	c = a + b;
//	d = a - b;
//	e = a * b;
//	f = a / b;
//	g = a % b;
//	printf ("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %d\n%d %% %d = %d\n", a, b, c, a, b, d, a, b, e, a, b, f, a, b, g);
//	return 0;
//}
//int main(void)
//{
//	int a, b, c;
//	
//	scanf("%d %d", &a, &b);
//    c = a + b;
//	printf("%d\n",c);
//	
//	return 0;
//}
int main(void)
{
	int f, c;
	c = 26;
	f = 9 * c / 5 + 32;
	printf("celsius = %d, fahr = %d\n" ,c, f);

	return 0;
}