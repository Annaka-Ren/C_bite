#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int f(float x);
//int main(int argc, char* argv[])
//{
//    float x;
//    scanf("%f", &x);
//    printf("f(%f)=%d", x, f(x));
//    return 0;
//}
//int f(float x)
//{//�����˵�������������������У�����
//    int maxInt = (int)x;//С�ڵ���x�����������
//    int minInt = (int)x;//����x����С������
//    if (maxInt > x)
//    {
//        maxInt -= 1; // ���ת��Ϊ���������X�����1
//    }
//    if (x <= 0)
//    {
//        minInt = 1;
//    }
//    else
//    {
//        // ���򣬾���X+1
//        minInt = x + 1;
//    }
//    return((maxInt % 2 != 0) && (minInt % 2 == 0));
//}

//����һ
//int main(void)
//{//����n�Ķ�������ʽ���м���1
//	int count = 0;
//	int n = -1;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)        //�������Ž⣬�����м���1��Ҫѭ��32��
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//��λ����0��0����λ����1��1����λ�����ͬ��0����ͬ��1
//������
//n = n&(n-1)    ������ʽ�Ὣn�Ķ����Ʊ�ʾ�����ұߵ�1ȥ��
//��n���0֮ǰ�� n = n&(n-1)������ʽ��ִ�м��Σ���˵��n�Ķ����Ʊ�ʾ���м���1
//int main(void)
//{
//	int count = 0;
//	int n = 10;
//	while (n)
//	{
//		count++;
//		n = n & (n - 1);
//	}
//	printf("%d\n", count);    
//	return 0;
//}

//д�������ж�n�Ƿ���2���ݴη�����
//˼·��n�Ķ�������ֻ��һ��1������2���ݴη�
//int main(void)
//{
//	int n = 8;
//	if (n & (n - 1) == 0)//ȥ��һ��1֮�����0
//	{
//		printf("��2���ݴη���\n");
//	}
//	return 0;
//}

//��ϰ����13�Ķ����Ƶĵ���λ��Ϊ1(ĳһλ�ĳ�1)
//int main(void)
//{
//	int n = 13;
//	n |= (1 << 4);//��5-1��--> 4
//	printf("%d", n);
//	return 0;
//}

//�ṹ��
//�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı������磺���⡢���顢ָ�룬�����������ṹ�塣

//����Ҫ����һ��ѧ�������֣����䣬�Ա�ѧ��
//������һ���ṹ������
//struct Student
//{
//	char name[20];//����
//	int age;//����
//	char sex[6];//�Ա�
//	char id[12];//ѧ��
//}s4, s5, s6;//s4Ҳ��һ���ṹ����� - ȫ��
//
//
//struct Student s3;//s3Ҳ��һ���ṹ����� - ȫ��
//
//int main(void)
//{
//	struct Student s1;//s1����һ���ṹ����� - �ֲ�
//	struct Student s2;//s2Ҳ��һ���ṹ�����
//	return 0;
//}


//struct Point//����
//{
//	int x;
//	int y;
//};
//
//struct Data
//{
//	int d;
//	struct Point p;
//	double t;
//};
//struct Point p1 = {10, 20};
//struct Student
//{
//	char name[20];//����
//	int age;//����
//	char sex[6];//�Ա�
//	char id[20];//ѧ��
//};//s4Ҳ��һ���ṹ����� - ȫ��
//
//int main(void)
//{
//	
//	struct Data data = { 100, {100, 200}, 3.14};
//	
//	struct Point p2;
//	/*struct Student s1 = { "����", 20, "��", "2024101203" };*/
//	//����Ĭ�ϵ�˳���ʼ��
//	struct Student s2 = { .age = 22, .id = "2024020304", .name = "����", .sex = "��" };
//	//���ַ�ʽ����ָ��˳��
//
//	//printf("%s\n", s1.name);//�ṹ�����.�ṹ���Ա��
//	//s1.age = 18;
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.sex);
//	//printf("%s\n", s1.id);
//	struct Student s1 = { 0 };
//	scanf("%s %d %s %s", s1.name, &(s1.age), s1.sex, s1.id);
//	printf("%s\n", s1.name);//�ṹ�����.�ṹ���Ա��
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.sex);
//	printf("%s\n", s1.id);
//
//	return 0;
//}
// 
//���ڲ������������ȼ�


//#include<stdio.h>
//#define N 100
//int Find_min(int n, int arr[N])
//{
//    int i = 0;
//    int min = 0;
//    for (i = 1; i < n; i++)
//    {
//        if (arr[i] < arr[min])
//        {
//            min = i;
//        }
//
//        return arr[min];
//    }
//}
//int main(void)
//{
//    unsigned int n = 0;
//    int i = 0;
//    int arr[N] = { 0 };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    printf("min = %d", Find_min(n, arr));
//    return 0;
//}
