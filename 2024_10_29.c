#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//void print_arr(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main(void)
//{
//	int i = 0; int arr[10] = { 0 };
//	//�����鸳ֵ
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i + 1;
//	}
//	//��ӡ���������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int num = 100;
//	char c = 'w';
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//	    arr[i] = i;
//    }
//return 0;
//}
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	
//	printf("%d\n", rsum);
//	return 0;
//}

//mainҲ�Ǻ�������main�����е�����main����������ǵݹ�
//����������ջ����
//��������ǵݹ�ģ������ǵݹ��һ�ִ����д��
//Stack overflowջ���
//�κ�һ�κ������ã�����������Դ
//��������ڴ���Դ(�ڴ���ջ������Դ)
//int main(void)
//{
//	printf("hehe\n");
//	//........
//	// ........
//	main();//��������ʵ�ֵݹ飬���ǲ��������Ƶĵݹ�
//	return 0;
//}

//һ���������Ľ׳�������С�ڼ����ڸ������������Ļ�������0�Ľ׳�Ϊ1
//��Ȼ���Ľ׳�Ϊд��n!
//��Ŀ������n�Ľ׳ˣ��������������n�Ľ׳˾���1~n�������ۻ����

//int fac(int n)
//{
//	if (n == 0)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = fac(n);//����nһ����>=0
//	printf("%d\n", r);
//	return 0;
//}



//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	while (n)
//	{
//		printf("%d ", n % 10);
//		n /= 10;
//	}
//	return 0;
//}

//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);//1 2 3 4
//	}
//	printf("%d ", n % 10);
//	
//}
//
//
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	Print(n);//Print���Խ�n��ÿһλ����˳���ӡ����Ļ��
//	return 0;
//}

//1.���»�С
//2.�ݹ��������
//������������
//�ƽ��������� 

//����n�Ľ׳ˡ���ѭ������(ѭ���ǵ�����һ��)
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = fac(n);//����nһ����>=0
//	printf("%d\n", r);
//	return 0;
//}


//���n��쳲�������
//int count = 0;
//
//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//
//}
//
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Fib(n);//3
//	printf("%d\n", r);
//	//�������ڼ����3��쳲�������ʱ���ͼ�����39088169��
//	printf("count = %d", count);
//	return 0;
//}
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main(void)
{
	int n = 0;
	scanf("%d", &n);
	int r = Fib(n);//40
//�ڼ����40��쳲���������ʱ��
	printf("%d\n", r);
	return 0;
}