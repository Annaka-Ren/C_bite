#include<stdio.h>
//
//int main(void)
//{
//	{
//		auto int a = 10;//自动创建，自动销毁的--自动变量
//		//auto省略掉了
//		//auto新的C语言语法中也有其他用法
//	}
//	return 0;
//}
//int main(void)
//{
//	//大量频繁被使用的数据，存放在寄存器中，提升效率
//	register int num = 100;//建议num的值存放在寄存器中
//	//define和include不是关键字，是预处理指令
//
//	return 0;
//}
//typedef unsigned int u_int;
//
//int main(void)
//{
//	unsigned int num = 100;
//	u_int num2 = 100;
//
//	return 0;
//}

//static - 静态的
//1.static修饰局部变量
//2.static修饰全局变量
//3.static修饰函数

//void test()
//{
//	static int a = 0;
//	a++;
//	printf("%d ", a);
//}
//int main(void)
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//static修饰全局变量，使得这个全局变量只能在自己所在的源文件（.c）内部可以使用
//其他源文件不能使用

//声明
//extern声明外部符号的

//全局变量在其他源文件内部可以使用，是因为全局变量具有外部链接属性
//但是被static修饰之后，就变成了内部连接属性，其他源文件就不能连接到这个静态的全局变量了
//extern int g_val;
//int main(void)
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//以上8行引用自add.c（已删除）
//全局变量
//static int g_val = 2024;
//static修饰函数
//static int Add(int x, int y)
//{
//
//	return x + y;
//}
//static修饰函数，使得函数只能在自己所在的源文件内部使用，不能在其他源文件内部使用
//声明函数
//extern int Add(int x, int y);
//
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//define是一个预处理指令
//1.define定义符号
//#define MAX 1000
//
//int main(void)
//{
//	printf("%d\n", MAX);
//	return 0;
//}


//2,define定义宏
//#define ADD(X,Y) ((X) + (Y))
//
//int main()
//{
//	//              ADD(2, 3) 被替换成2+3
//	printf("%d\n", 4*ADD(2, 3));
//	//             4*2+3=11运算优先级）
//	return 0;
//}
//int main()
//{
//	int a = 10;//a在内存中要分配空间--4个字节bit
//	printf("%p\n", &a);//%p专门用来打印地址
//	int * pa = &a;//pa是用来存放地址的，pa在C语言中叫指针变量
//	//* 说明pa是指针变量
//	//int说明pa指向的对象是int类型的
//
//	char ch = 'w';
//	char * pc = &ch;
//
//	return 0;
//}
//指针就是地址
//int main(void)
//{
//	int a = 10; 
//	int * pa = &a;
//	//  *解引用操作符
//	*pa = 20;//解引用操作  *pa就是通过pa里边的地址，找到a
//
//	printf("%d\n", a);
//
//	return 0;
//}
int main(void)
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	//指针的大小是相同的，指针是用来存放地址的
	//指针需要多大空间取决于地址的存储需要多大空间
	//32位  32bit - 4byte
	//64位  64bit - 8byte

	return 0;
}