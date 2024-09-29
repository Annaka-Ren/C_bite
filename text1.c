#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//int main(void)
//{
//	//printf("c:\test\test.c");//转义字符：转变了原来的意思
//	printf("ab\ncd");//\t(水平制表符)
//	return 0;
//}
//int main(void)
//{
//	//printf("(are you ok??)");//??) -- ] - 三字母词
//	////(are you ok]
//	//printf("%c\n", '\'');
//	printf("%s\n","abc");
//	printf("%s\n", "a");
//	printf("%s\n", "\"");
//	printf("c:\\test\\test.c");
//	printf("\a\a\a\a\a\a\a\a\a\a\a");
//	//printf在打印数据时，可以指定打印的格式
//	return 0;
//}
////printf("%d", 100);
////printf("%c", 'a');
////pringt("%s", "abc");
//int main(void)
//{
//	//printf("%c\n",'\130'); //8进制的130是十进制的88
//	//X == AS||码值为88
//	//printf("%c\n", '\101');//A - 65 - 8进制为101
//	//printf("%d\n", strlen("abc"));//3
//	printf("%d\n",strlen("c:\test\328\test.c"));
//	return 0;
//}
//C语言风格不支持嵌套注释/**/
//C++语言风格可以注释一行也可以注释多行//
//int main()
//{
//	int input = 0;//输入的值
//	printf("加入比特:>\n");
//	printf("那要好好学习吗(1/0)?>");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("好offer\n");
//	}
//		
//	else
//	{
//        printf("卖红薯\n");
//	}
//		
//	return 0;
//}

//int main(void)
//{
//	int line = 0;
//	//循环
//	while(line < 30000)
//	{
//		printf("写代码:%d\n", line);
//		line++;
//    }
//	if (line == 30000)
//	{
//
//		printf("好offfer\n");
//	}
//	return 0;
//}
//Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main(void)
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	/*int sum = num1 + num2;*/
//	//函数的方式解决
//	int sum = Add(num1, num2);
//	printf("%d\n", sum);
//
//	return 0;
//}
//int main(void)
//{
//	//数组；一组相同类型的元素的集合
//	//10个整型1-10存起来
//	//数组使用下标来访问的(下标从0开始)
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	while(i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	//char ch[5] = { 'a', 'b', 'c' };//不完全初始化，剩余的默认为0
//	return 0;
//}
//int main(void)
//{
//	//int a = 9 / 2;
//	//float a = 9 / 2.0;
//	int a = 9 % 2;//% - 取模（取余）
//	printf("%.1d\n", a);
//	return 0;
//}
//int main(void)
//{
//	int a = 2;
//	//int b = a << 1;//左移操作符 - 移动的是二进制位
//	a = a + 5;//赋值
//	a += 5;//复合赋值	a + b:+有两个操作数，双目操作符
//	//单目操作符：只有一个操作数的操作符(-,+)
//	printf("%d\n", b);
//	return 0;
//}
//int main(void)
//{
//	//0表示假，非0就是真
//	int a = 10;
//	printf("%d\n", !a);//!:把真变成假，把假变成真
//
//	if (a)
//	{
//
//		//如果a为真，做事
//	}
//	if (!a)
//	{
//
//		//如果a为假，做事
//	}
//	a = -5;
//	a = -a;
//	a = +a;
//
//	return 0;
//}

//int main(void)
//{
//	//sizeof是一个操作符
//	//sizeof后面的括号可以省略，说明其不是函数，求变量可以省略括号，求类型时不可省略
//	// 通常不会省略括号，只是支持
//	//计算类型或者变量的大小的
//	int a = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(a));
//	return 0;
//}

int main(void)
{//如何计算一个数组的元素个数
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//计算的是数组的总大小，单位是字节
	printf("%d\n", sizeof(arr[0]));//4
	int sz = sizeof(arr) / sizeof(arr[0]);//strlen是计算字符的个数，sizeof是计算字节的个数
	printf("%d\n", sz);
	return 0;
}