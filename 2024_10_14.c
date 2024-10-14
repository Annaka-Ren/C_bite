#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//while循环实践
//int main(void)
//{
//	int i = 1;
//	
//	while(i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//int main(void)
//{
//	int num = 0;
//	int i = 1;
//	
//    scanf("%d", &num);
//    
//	
//	while (num != 0)
//	{
//        int r = num % 10;
//		printf("%d ", r);
//		num /= 10;
//	}
//	return 0;
//}
//int main(void)
//{
//	int num = 0;
//	
//
//	scanf("%d", &num);
//
//
//	while (num)
//	{
//		printf("%d ", num % 10);
//		num /= 10;
//	}
//	return 0;
//}
//for循环
//int main(void)
//{
//	
//	int i = 1;//循环变量的初始化
//	while (i <= 0)//循环的判断条件
//	{ 
//		printf("%d ", i);
//		i++;//循环变量的调整
//	}
//	return 0;
//}
//int main(void)
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}
//int main(void)
//{
//	int i = 0;
//	int sum = 0;//
//	for (i = 1; i <= 100; i++)
//	{
//		//产生一个i
//		//判断i是否为3的倍数
//		if (i % 3 == 0)
//			sum += i;
//	}
//	printf("%d\n", sum);
// 
//	return 0;
// 循环100次，判断100次
//}
//int main(void)
//{
//	int i = 0;
//	int sum = 0;//
//	for (i = 3; i <= 100; i += 3)
//	{
//			sum += i;
//	}
//	printf("%d\n", sum);
//	return 0;
// 循环100次
//}
//do - while 循环  特征：循环体至少被执行一次
//int main(void)
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
//int main(void)
//{
//	int n = 0;
//	int cnt = 0;
//	scanf("%d", &n);
//	do
//	{
//		cnt++;
//		n /= 10;
//	} while(n);
//	printf("%d\n", cnt);
//	return 0;
//}
//break和continue语句
//int main(void)
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;//当i等于5后，就执⾏break，循环就终⽌了
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//int main(void)
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//int main(void)
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main(void)
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//
//	}
//	return 0;
//}
//int main(void)
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
//int main(void)
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
//循环的嵌套
//int main(void)
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//要产生2`i-1之间的数字
//		int j = 0;
//		int flag = 1;//假设i是素数
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//i不可能是素数了
//				break;
//			}
//			else
//			{
//                printf("%d ", i);
//			}
//		}
//		if (flag == 1)//是素数
//			
//		//1.break
//		//2.j==1
//	}
//	return 0;
//}
#include<math.h>//数学相关的头文件
//int main(void)
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		
//		int j = 0;
//		int flag = 1;//假设i是素数
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//i不可能是素数了
//				break;
//			}
//		}
//		if (flag == 1)//是素数
//        printf("%d ", i);
//			//1.break
//			//2.j==1
//	}
//	return 0;
//}
//int main(void)
//{
//	int i = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		//判断i是否是素数
//		//产生
//		int j = 0;
//		int flag = 1;//假设i是素数
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//i不可能是素数了
//				break;
//			}
//		}
//		if (flag == 1)//是素数
//			printf("%d ", i);
//		//1.break
//		//2.j==1
//	}
//	return 0;
//}
// goto语句
//int main(void)
//{
//	printf("hehe\n");
//	goto next;
//	printf("haha\n");
//next:
//	printf("heihei\n");
//	return 0;
//}
//int main(void)
//{
//again:
//	printf("hehe\n");
//	goto again;
//	printf("haha\n");
//	return 0;
//}


//字符串是不能使用等于号比较大小的
//应使用strcmp函数-string compare
//0 == strcmp(input, "我是猪")//判断相等则返回0
#include<string.h>
//int main(void)
//{
//	char input[20] = { 0 };//存放一个字符串
//	system("shutdown -s -t 60");//system 是一个库函数，执行系统命令
//again:
//	printf("请注意，你的电脑在一分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);//输入字符串，存储在input中
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");//取消关机
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}
//int main(void)
//{
//	int a = 0;
//	int b = 0;
//	while (scanf("%d %d", &a, &b) == 2)
//	{
//		int c = a + b;
//		printf("c = %d\n", c);
//	}
//	
//	
//	
//	return 0;
//}
//int main(void)
//{
//	int a = 0;
//	int b = 0;
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		int c = a + b;
//		printf("c = %d\n", c);
//	}
//
//	return 0;
//}
#include<time.h>
int main(void)
{
	srand((unsigned int)time(NULL));
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());

	return 0;
}