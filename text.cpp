#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main(void)
//{
//	int x, y;
//	x = 3;
//	y = 9;
//	printf("%d = %d * %d\n",y, x, x);
//	printf("%d * %d = %d\n",x, x, y);
//	return 0;
//}
//#include<stdio.h>
//int main(void)
//{
//	float h, g, t;
//	t = 3;
//	g = 10; 
//	h = g * t * t / 2;
//	printf("height = %.2f", h);
//	return 0;
//}
//#include<stdio.h>
//int main(void)
//{
//	int n, g, s, b;
//	n = 152;
//	g = n % 10;
//	s = n / 10 % 10;
//	b = n / 100;
//	printf("%d = %d + %d*10 + %d*100",n, g, s, b);
//	return 0;
//}
#include<stdio.h>
#include<math.h>
#include<string.h>

//int main(void)
//{
//	int s, y, j, p;
//	s = 87;
//	y = 72;
//	j = 93;
//	p = (s + y + j)/ 3;
//	printf("math = %d, eng = %d, comp = %d, average = %d\n", s, y, j, p );
//	return 0;
//}
//int main(void)
//{
//	float m, y, r, i; //interest=money×(1+rate)^year−money
//	
//	scanf("%f %f %f", &m, &y, &r);
//	i = m * pow(1 + r, y) - m;
//	printf("interest = %.2f",i);
//
//	return 0;
//}
//int main(void)
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("a=%d,b=%d", b, a);
//	return 0;
//}

//常量和变量；字面常量，const修饰的常变量，#define定义的标识符常量，
// 枚举常量（可以一一列举的常量）
//字符数组 - 数组是一类相同类型的元素
//字符串在结尾的位置隐藏了一个\0的字符
//\0是字符串的结束标志

int main()
{

   // char arr[] = "hello";
	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c', '\0' };
	//打印字符串
	/*printf("%s\n", arr1);
	printf("%s\n", arr2);*/
	//欲求字符串长度
	printf("%d\n", strlen(arr1));//固定
	printf("%d\n", strlen(arr2));//随机值(没有\0时)
	// printf(%d\n
	//int len = strlen("abc");//string length
	//printf("%d\n", len);
	return 0;
}
