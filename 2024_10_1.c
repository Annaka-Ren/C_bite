#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//int main(void)
//{
//	int line = 0;
//	while (line < 30000)
//	{
//
//		printf("写代码:%d\n", line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("完成\n");
//	}
//	return 0;
//}
//int main(void)
//{
//	int magic, number;
//	magic = rand() % 5 + 1;
//	scanf("%d", &number);
//	if (number == magic)
//	{
//		printf("right\n");
//	}
//	else {
//		printf("wrong");
//	}
//	return 0;
//}
//int main(void)
//{
//    double x, y;
//    scanf("%lf", &x);//输入用水量x
//
//    if (x < 0)//分段计算水费
//    {
//        y = 0;
//    }
//    if(x <= 15)
//    {
//        y = 4 * x / 3;
//    }
//    if(x > 15)
//    {
//        y = 2.5 * x - 10.5;
//     }
//    printf("%.2f", y);
//
//    return 0;
//}
int main(void)
{
	int d;
	int line = 0;
		while (line < 100)
		{
			printf("程序正在启动:%d%%\n", line);
			line++;
		}
		if (line == 100)
		{
			printf("程序启动成功\n");
		}
	printf("请输入您要查询的星期内天数：\n");
	scanf("%d", &d);
		switch (d)
		{
		  case 1: printf("月曜日\n恭喜您查询成功！\n"); break;
		  case 2: printf("火曜日\n恭喜您查询成功！"); break;
		  case 3: printf("水曜日\n恭喜您查询成功！"); break;
		  case 4: printf("木曜日\n恭喜您查询成功！"); break;
		  case 5: printf("金曜日\n恭喜您查询成功！"); break;
		  case 6: printf("土曜日\n恭喜您查询成功！"); break;
		  case 7: printf("日曜日\n恭喜您查询成功！"); break;
			default: printf("查询失败！！！\a\n");
		}
	return 0;
}