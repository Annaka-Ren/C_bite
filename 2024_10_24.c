#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main(void)
//{
//	int len = strlen("abc");//strlen���ص�ֵ��size_t���͵�
//	printf("%zd\n", len);
//
//	return 0;
//}
//int main(void)
//{
//	printf("%zd\n", strlen("abc"));
//
//	return 0;
//}
//int main(void)
//{
//	//   3          2             1
//	printf("%d", printf("%d", printf("%d", 43)));
//	//printf����������гɹ����򷵻ش�ӡ����Ļ���ַ��ĸ���
//	return 0;
//}

//��������귵��1�����򷵻�0
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1; 
//	else
//		return 0;
//}

//int is_leap_year(int y)
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
#include<stdbool.h>
//bool is_leap_year(int y)
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//��������ģ�������в���
//#include "leap.h"//ʹ���Լ�ͷ�ļ��������ĺ�����ʹ��""
//����������
//int is_leap_year(int y);
//#include "leap.h"
//int main(void)
//{
//	int year = 0;
//	scanf("%d", &year);
//	//�ж�
//	//������ʹ��Ҫ��֤��������ʹ�ã�ֻҪ��ʹ��֮ǰ�����Ϳ���
//	if (is_leap_year(year))//�����ĵ���
//		printf("%d ������\n", year);
//	else
//		printf("%d ��������\n", year);
//	return 0;
//}
////�����Ķ��壨��������һ�������������
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//ͷ�ļ��İ����������Ͼ�������˺���������
//���뾲̬��
//#pragma comment(lib, "leap.lib")


//ststic���ξֲ�����

//void test()
//{
//	static int n = 5;
//	n++;
//	printf("%d ", n);
//}
//int main(void)
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		test();
//	}
//	return 0;
//}

//extern�����������ⲿ���ŵ�
//extern int g_val;
////int g_val = 2025;
////һ��ȫ�ֱ�����static���Σ�ʹ�����ȫ�ֱ���ֻ���ڱ�Դ�ļ���ʹ�ã�����������Դ�ļ���ʹ��
//
//void test()
//{
//	printf("2: %d\n", g_val);
//}
//int main(void)
//{
//	printf("1: %d\n", g_val);
//	test();
//	return 0;
//}


//extern int Add(int x, int y);
//int main(void)
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}