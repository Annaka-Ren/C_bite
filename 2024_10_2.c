#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//int main(void)//0�Ķ�����λԭ�������λ��������λ��λȡ����
////���õ�0�Ķ�����λ�����ת��Ϊʮ�������-1
////
//{
//	int a = 0;//�������ڴ��д洢���ǲ���,��һλ��ʾ����λ
//	//һ�������Ķ����Ʊ�ʾ������
//	//���ͱ���4���ֽڣ�һ���ֽ�8����λ
//	// ����a
//	// 0
//	// �����ƣ�
//	// 00000000000000000000000000000000
//	// 11111111111111111111111111111111    ~a
//	//��λȡ������λ����
//	printf("%d\n", ~a);
//    //~��λȡ��//��������λȡ��-�����ж�����λ�����֣�1���0��0���1
//	return 0;
//}
//int main(void)
//{
//	//int a = 10;
//	//int b = a++;
//
//	//printf("%d\n", b);//11
//	//printf("%d\n", a);//11
//
//	//int b = ++a;//ǰ��++   - ��++��ʹ��
//	//++a�����������a��ֵ��a++�����a��ֵ������
//	//printf("%d\n", b);//11
//	//printf("%d\n", a);//11
//	return 0;

//&&�߼���||�߼���-----�߼�������
//int main(void)
//{
//	//ǿ������ת�������Ƽ�ʹ�õ��������﷨���ڣ�
//	int a = (int)3.14;
//
//	printf("%d\n", a);
//	return 0;
//}
//int main(void)
//{
//	int a = 1;
//	int b = 2;
//	int c = a || b;
//	printf("%d\n", c);
//	/*int c = a && b;
//	printf("%d\n", c);*/
//	//if (a && b)//&&:����--����ͬʱΪ��ʱ,���Ϊ��
//	//{//0Ϊ��
//	//}
//
//	return 0;
//}

//��������������Ŀ��������exp1 ? exp2 : exp
//��exp1 ������exp2���㣬�������ʽ�Ľṹ�ǣ�exp2�Ľ��
//��exp1 ��������exp3���㣬�������ʽ�Ľṹ�ǣ�exp3�Ľ��
//int main(void)
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//
//	max = a > b ? a : b;
//	printf("%d\n", max);
//	return 0;
//}
//int main(void)//���ű��ʽ�����Ÿ�����һ�����ʽ
//{
//	//(2, 4 + 5, 6);
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	        //a = 5     c = 1       b = 3
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//���ű��ʽ�Ǵ����������μ����
//	//�������ʽ�Ľ�������һ�����ʽ�Ľ��
//	printf("%d\n", d);
//	return 0;
//}
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//            [ 0,1,2,3,4,5,6,7,8,9  ]
//	int i = 9;
//	do
//	{
//		printf("%d\n", arr[i]);//[�±����ò�����]
//		i--;
//	}while (i >= 0);
//	
//	return 0;
//}

////�������ò�����
//int main(void)
//{
//	//���ú�����ʱ�򣬺������ƺ�ߵģ������Ǻ������ò�����
//	printf("hehe\n");
//	printf("%d", 100);
//
//	return 0;
//}
int main(void)
{
	int n = 0;
	do
	{
		printf("���ڻ���%d%%\n", n);
		n++;
	} while (n < 101);
	printf("�ɹ�������");
	int grade;
	printf("��������deʵ�����£�");
	scanf("%d", &grade);

	if (grade <= 100)
	{
		grade = grade / 10;
		if (grade == 4 || grade == 5)
		{
			printf("�Ѻ���");
		}
		else if (grade == 3)
		{
			printf("��Ȼû���£�");
		}
		else if (grade == 2)
		{
			printf("�Ȼ������Ȼ�����");
		}
		else if (grade == 1 || grade == 0)
		{
			printf("ʬ��������");
		}
		else
		{
			printf("������Ļ�������ˣ�");
		}

	}
	else
	{
		printf("��ô�������ô���ף�����֪��ʲô�Ǻ��֣�");
	}
	return 0;
}