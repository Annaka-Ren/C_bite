#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//int n = 0;
//int m = 0;
//int sum = 0;
//void exe()
//{
//	scanf("%d", &n);//n = 9
//	m = n % 5;//m = 4
//	n = n - m;//n = 5
//	m = 0;//�Ѽ���ƭ��ȥ�ˣ�������ȷ��Ӧ������޸��� 
//	if (n < 1000)
//	{
//		while (m <= n)
//		{
//			sum += m;
//			m += 5;
//		}
//	}
//
//}
//int main(void)
//{
//	exe();
//	printf("%d\n", sum);
//	return 0;
//}
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//����
//	//            0,1,2,3,4,5,6,7,8, 9
//	//����һ��ֵ
//	int k = 0;
//	scanf("%d", &k);//����Ҫ���ҵ����� - 7
//	//����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int flag = 0;//����û�ҵ�
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//������������ݲ��ܽ��ж��ֲ���
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//����
//	//            0,1,2,3,4,5,6,7,8, 9
//	//����һ��ֵ
//	int k = 0;
//	scanf("%d", &k);//����Ҫ���ҵ����� - 7
//	//����
//	//���ֲ��ң��۰���ң�
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	//һ�β��ҵĹ���
//	int flag = 0;//��ʼ״̬��û�ҵ�
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//int mid = left + (right - left)/2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("û�ҵ�");
//	}
//	
//	return 0;
//}
//�µ���ƽ��ֵ�ķ�ʽint mid = left + (right - left)/2;


//����


//int main(void)
//{
//	double r = sqrt(16.0);
//	printf("%lf\n", r);
//	printf("%.1lf\n", r);
//	return 0;
//}
//int main(void)
//{
//	int a = 0;
//	int b = 0;
//	//����
//	scanf("%d %d", &a, &b);
//	//����
//	int c = a + b;
//	//���
//	printf("%d\n", c);
//	return 0;
//}

//�����Ķ���
//int Add(int x, int y)//x,y��ʽ�������βΣ�
//{
//	 int z = x + y;
//	 return z;//���ؼ���ĺ�
//}
//int Add(int x, int y)
//{
//	return x + y;//���ؼ���ĺ�
//}
//int main(void)
//{
//	int a = 0;
//	int b = 0;
//	//����
//	scanf("%d %d", &a, &b);
//	//����
//	int c = Add(a,b);//����Add�������a��b�����
// //a,bʵ�ʲ�����ʵ�Σ�
//	//���
//	printf("%d\n", c);
//	return 0;
//}

//int test()
//{
//	printf("haha\n");
//	int a = 0;
//	scanf("%d", &a);
//	if (a == 1)
//		return 3.14;
//	else
//		return -3.14;
//}
//int main(void)
//{
//	int r = test();
//	printf("%d\n", r);
//	return 0;
//}

//����������Ϊ�����������������int
//test()
//{
//	printf("haha\n");
//	int a = 0; scanf("%d\n", a);
//	printf("hello world");
//	//����ʵ�ʷ��ص�ֵ��ȷ��
//}
//int main(void)
//{
//	int r = test();
//	printf("%d\n", r);
//	return 0;
//}


//ʵ�κ��βε������ǿ�����ͬ��
//void set_arr(int arr2[10],int sz2)
//{
//	int i = 0;
//	for (i = 0; i < sz2; i++)
//	{
//		arr2[i] = -1;
//	}
//}
//print_arr(int arr2[10], int sz2)
//{
//	int i = 0;
//	for (i = 0; i < sz2; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//}
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	//дһ��������������arr������ȫ����Ϊ-1
//	set_arr(arr,sz);
//
//	//дһ����������ӡ���������
//	print_arr(arr, sz);
//	return 0;
//}
//void set_arr(int arr2[10], int sz2)
//{
//	int i = 0;
//	for (i = 0; i < sz2; i++)
//	{
//		arr2[i] = -1;
//	}
//}
//void print_arr(int arr2[10], int sz2)
//{
//	int i = 0;
//	for (i = 0; i < sz2; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//}
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);//arr[10]---arr�������±�Ϊ10��Ԫ��
//
//	//дһ��������������arr������ȫ����Ϊ-1
//	set_arr(arr, sz);//���鴫�ε�ʱ�򣬱����ϴ��ݵ��ǵ�ַ(�漰ָ��)
//
//	//дһ����������ӡ���������
//	print_arr(arr, sz);
//
//	return 0;
//}


//   29
//31 28 31 30 31 30 31 31 30 31  30  31
//1  2  3  4  5  6  7  8  9  10  11  12
//

//���y�����꣬����1
//����������꣬����0
is_leap_year(int y)
{
	if(((y%4==0)&&(y%100!=0))||(y%400==0))
		return 1;
	else
		return 0;
}
int get_days_of_month(int y, int m)
{
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	     //          0  1  2  3  4  5  6  7  8  9 10 11 12
	int d = days[m];

	if (is_leap_year(y) && m == 2)//�����2�¶�һ��
		d += 1;
	return d;
}
int main(void)
{
	int year = 0;//��
	int month = 0;
	scanf("%d %d", &year, &month);

	//����year��month�µ�����  ����2024��10���ж����죿
	get_days_of_month(year, month);
	printf("%d\n", d);
	return 0;
}
//�������ǶԵȵģ�����Ƕ�׶��壬���ǿ���Ƕ�׵���