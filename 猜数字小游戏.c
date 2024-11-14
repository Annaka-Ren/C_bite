#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void game()
{
	char a[20] = { 0 };
	int r = rand() % 10 + 1;
	int guess = 0;
	int count = 3; 
	system("shutdown -s -t 60");//system 是一个库函数，执行系统命令
	while (1)
	{
		printf("请注意，你的电脑在一分钟内关机，如果不想关机请遵从接下来的指示\n");
		printf("\n你还有%d次机会\n", count);
		printf("请猜0-10之间的数字> :");
		scanf("%d", &guess);
		if (guess < r)
		{
			printf("猜小了\n");
		}
		else if (guess > r)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			system("shutdown -a");//取消关机
			break;
		}
		count--;
		if (count == 0)
		{
			printf("你失败了，正确值是: %d\n", r);
			printf("电脑即将关机。。。\n");
			www:
			printf("如果你不想关机，请通过尽快输入“爸爸我错了”以取消关机\n");
			printf("请输入你的真心话> :");
			scanf("%s", a);
			if (strcmp(a, "爸爸我错了") == 0)
				system("shutdown -a");
			else
				goto www;
			break;
		}
	}
	
}
void menu()
{
	printf("***********************\n");
	printf("******  1. play  ******\n");
	printf("******  0. exit  ******\n");
	printf("***********************\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择: > ");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("游戏结束\n");
				break;
			default:
				printf("选择错误，重新选择\n");
				break;
		}
	} while (input);
	return 0;
}