#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//int main(void)
//{
//	srand((unsigned int)time(NULL));
//	//rand()--> 0`32767
//	printf("%d\n", rand() % 100 + 1);//0`99 --> 1~100
//	printf("%d\n", rand() % 101 + 100);//0~100 +100 -->100~200
//	//a + rand()%(b-a+1) <-- a~b
//
//	return 0;
//}

//玩完一次后，如果想继续玩，是可以直接玩的，不需要退出游戏
//1.玩游戏
//0.退出游戏


//定义函数，封装
//void menu()
//{
//	printf("--------------------------------\n");
//	printf("--------------1.玩游戏----------\n");
//	printf("--------------0.退出游戏--------\n");
//	printf("--------------------------------\n");
//}
//
//void game()
//{
//	int guess = 0;
//	//游戏的实现
//	//1.生成随机数
//	int r = rand() % 100 + 1;
//	//printf("r = %d\n", r);
//	//2.猜数字
//	int count = 5;
//	while (count)//5,4,3,2,1,
//	{
//		printf("剩余%d次机会", count);
//		printf("猜数字\n");
//	    scanf("%d", &guess);
//	    if (guess > r)
//		    printf("猜大了");
//	    else if (guess < r)
//		    printf("猜小了");
//	    else
//	    {
//		 printf("猜对了！");
//		 break;
//	    }
//		count--;
//	}
//	if (count == 0)
//	{
//		printf("游戏失败\n");
//	}
//	
//}
//int main(void)
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//
//	do
//	{
//		menu();//函数的调用
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//完成猜数字游戏的实现
//			printf("猜数字游戏\n");
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新输入");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int main(void)
//{
//	int a = 20;//变量的初始化
//	int arr[5];//数组array
//	float arr2[7];
//	char arr3[3];
//	return 0;
//}

//数组一旦有初始化的时候，其实数组的大小是可以省略的

//int main(void)
//{
//	int arr5[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr6[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//根据初始化的内容确定元素个数
//	int arr7[] = { 1, 2, 3, 4};//根据初始化的内容确定元素个数
//
//
//	//数组的初始化
//	//int arr[5] = { 1, 2, 3, 4, 5 };//完全初始化
//	//int arr2[5] = { 1, 2, 3 };//部分初始化，剩余部分默认初始化为0
//	//int arr3[5] = { 0 };
//	return 0;
//}
//int main(void)
//{
//	int arr[10] = { 0 };//arr数组的类型是int [10]
//	int arr2[] = { 0 };
//	return 0;
//}
//int main(void)
//{
//	int a = 0;
//	int arr[10] = { 0 };//10 * 4 = 40
//	printf("%zd\n", sizeof(arr));//40
//	printf("%zd\n", sizeof(int[10]));//40
//	printf("%zd\n", sizeof(int[5]));//20
//	return 0;
//}
//int main(void)
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", arr[7]);
//	arr[7] = 70;
//	printf("%d\n", arr[7]);
//	return 0;
//}
//[]操作符：下标访问(引用)操作符，arr和6是操作数
