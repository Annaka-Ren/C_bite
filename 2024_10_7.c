#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main(void)
//{
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	//putchar(ch);
//
//	//}
//
//	//例
//	///假设密码是一个字符串
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	//getchar();//读取了\n
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认密码(Y/N):>");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}
//int main(void)
//{
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//	//sizeof计算的是数组的总大小，单位是字节
//	//sizeof[0]计算的是数组元素的大小
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//
//	return 0;
//}
//20060918
//int main(void)
//{
//	//输入数据
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//
//	//输出
//	printf("year =%d\n", year);
//	printf("month =%02d\n", month);
//	printf("date= %02d\n", date);
//
//	return 0;
//}
//int main(void)
//{
//	int arr[4] = { 0 };
//	//0 1 2 3
//	int i = 1;
//	int n = 0;
//	int max = 0;
//	//假设第一个元素就是最大值
//	scanf("%d", &max);
//
//	while (i < 4)
//	{
//		scanf("%d", &n);
//		if (n > max)
//			max = n;
//		i++;
//	}
//	
//	printf("%d\n", max);
//	return 0;
//}
//int main(void)
//{
//	double r = 0.0f;
//	double v = 0.0f;
//	//0.0默认是double类型
//	//3.14
//	scanf("%lf", &r);
//	v = 4 / 3.0 * 3.1415926 * r * r * r;
//	printf("%.3f\n", v);
//	return 0;
//}
//int main(void)
//{
//	int weight = 0;
//	int high = 0;
//	scanf("%d %d", &weight, &high);
//
//	//计算
//	float bmi = weight/(high / 100.0) / (high / 100.0);
//	//输出
//	printf("%.2f\n", bmi);
//	return 0;
//}