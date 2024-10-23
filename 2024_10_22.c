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
//	m = 0;//把检查点骗过去了，但是正确的应该如何修改呢 
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
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//升序
//	//            0,1,2,3,4,5,6,7,8, 9
//	//查找一个值
//	int k = 0;
//	scanf("%d", &k);//输入要查找的数字 - 7
//	//查找
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int flag = 0;//假设没找到
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下标是：%d\n", i);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//对于无序的数据不能进行二分查找
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//升序
//	//            0,1,2,3,4,5,6,7,8, 9
//	//查找一个值
//	int k = 0;
//	scanf("%d", &k);//输入要查找的数字 - 7
//	//查找
//	//二分查找（折半查找）
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	//一次查找的过程
//	int flag = 0;//初始状态是没找到
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
//			printf("找到了，下标是：%d\n", mid);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("没找到");
//	}
//	
//	return 0;
//}
//新的求平均值的方式int mid = left + (right - left)/2;


//函数


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
//	//输入
//	scanf("%d %d", &a, &b);
//	//计算
//	int c = a + b;
//	//输出
//	printf("%d\n", c);
//	return 0;
//}

//函数的定义
//int Add(int x, int y)//x,y形式参数（形参）
//{
//	 int z = x + y;
//	 return z;//返回计算的和
//}
//int Add(int x, int y)
//{
//	return x + y;//返回计算的和
//}
//int main(void)
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//	//计算
//	int c = Add(a,b);//调用Add函数完成a和b的相加
// //a,b实际参数（实参）
//	//输出
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

//编译器会认为这个函数返回类型是int
//test()
//{
//	printf("haha\n");
//	int a = 0; scanf("%d\n", a);
//	printf("hello world");
//	//最终实际返回的值不确定
//}
//int main(void)
//{
//	int r = test();
//	printf("%d\n", r);
//	return 0;
//}


//实参和形参的名字是可以相同的
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
//	//写一个函数，将数组arr的内容全部置为-1
//	set_arr(arr,sz);
//
//	//写一个函数，打印数组的内容
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
//	print_arr(arr, sz);//arr[10]---arr数组中下标为10的元素
//
//	//写一个函数，将数组arr的内容全部置为-1
//	set_arr(arr, sz);//数组传参的时候，本质上传递的是地址(涉及指针)
//
//	//写一个函数，打印数组的内容
//	print_arr(arr, sz);
//
//	return 0;
//}


//   29
//31 28 31 30 31 30 31 31 30 31  30  31
//1  2  3  4  5  6  7  8  9  10  11  12
//

//如果y是闰年，返回1
//如果不是闰年，返回0
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

	if (is_leap_year(y) && m == 2)//闰年的2月多一天
		d += 1;
	return d;
}
int main(void)
{
	int year = 0;//年
	int month = 0;
	scanf("%d %d", &year, &month);

	//计算year年month月的天数  例如2024年10月有多少天？
	get_days_of_month(year, month);
	printf("%d\n", d);
	return 0;
}
//函数都是对等的，不能嵌套定义，但是可以嵌套调用