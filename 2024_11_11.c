#define _CRT_SECURE_NO_WARNINGS 1

#include<stdlib.h>
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ�����ʵ�֣���
//#define MONEY 20
//int money = MONEY;
//int pin = 0;
//int r_pin = 0;
//void pay()
//{
//	while (money > 0)
//	{
//		money--;
//		pin++;
//		r_pin = pin;
//	}
//	
//	while (pin >= 2 )
//	{
//		pin -= 2;
//		r_pin++;
//		pin++;
//	}
//}
//int main(void)
//{
//	while (money > 0 ||pin >= 2 )
//	{
//		pay();
//	}
//	printf("�ܺ� %d ƿ��ˮ", r_pin);
//	return 0;
//}
//#define N 13
//
//void print(char space[N]);
//void exchange(char space1[N], char space[N]);
//
//void exchange(char space1[N], char space[N])
//{
//    int mid = N / 2; // �м�ê��
//    for (int i = 0; i <= mid; i++) // �����ϰ벿��
//    {
//         //���ÿո���Ǻŵ�λ��
//        for (int j = 0; j < N; j++) {
//            space[j] = ' '; // ��ʼ��Ϊ�ո�
//        }
//
//         //�����к�����Ǻ�
//        for (int j = mid - i; j <= mid + i; j++) {
//            space[j] = '*'; // ����Ǻ�
//        }
//
//        print(space); // ��ӡ��ǰ��
//    }
//
//    for (int i = mid - 1; i >= 0; i--) // �����°벿��
//    {
//         //���ÿո���Ǻŵ�λ��
//        for (int j = 0; j < N; j++) {
//            space[j] = ' '; // ��ʼ��Ϊ�ո�
//        }
//
//         //�����к�����Ǻ�
//        for (int j = mid - i; j <= mid + i; j++) {
//            space[j] = '*'; // ����Ǻ�
//        }
//
//        print(space); // ��ӡ��ǰ��
//    }
//}
//
//void print(char space[N]) // ��ӡ����
//{
//    for (int j = 0; j < N; j++)
//    {
//        printf("%c", space[j]);
//    }
//    printf("\n");
//}
//
//int main(void)
//{
//    char space[N] = { 0 }; // �ո��
//    for (int i = 0; i < N; i++) {
//        space[i] = ' '; // ȷ���������鶼�ǿո�
//    }
//    exchange(space, space);
//
//    return 0;
//}

//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ��������� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
//#define N 100000
//#define M 6
////��������
//int digit(int n);
//void digitsOfNumber(int n, int digit1[]);
//int Narcissistic(int count, int digit1[], int n);
//void print(int arr[], int size);
////�����Ķ���
//int digit(int n)//��λ��
//{
//	int count = 0;
//	while (n != 0) 
//	{
//		n /= 10;
//		count++;
//	}
//	return count;
//}
////�������ڽ����ֵ�ÿһλ��������
//void digitsOfNumber(int n, int digit1[]) 
//{
//	int i = 0;
//	// ���������
//	n = (n < 0) ? -n : n;
//
//	// �����������nΪ0ʱ��ֱ�Ӵ�������
//	if (n == 0) 
//	{
//		digit1[0] = 0;
//		return;
//	}
//
//	// ѭ��ֱ��nΪ0
//	while (n != 0)
//	{
//		digit1[i] = n % 10; // ȡ�����һλ����
//		n /= 10;         // �Ƴ����һλ����
//		i++;             // �ƶ�����һλ
//	}
//}//digit1�����δ��n��ÿһλ����
//int Narcissistic(int count,int digit1[],int n)//λ����ÿλ����ԭ��
//{
//	//count = digit(n);
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < count; i++)
//	{
//		sum += pow(digit1[i], count);
//	}
//	return sum == n ? 1 : 0;
//	/*if (sum == n)
//		return n;
//	else
//		return 0;*/
//}
//void print(int arr[], int size) 
//{
//	for (int i = 0; i < size; i++) 
//	{
//		int digit1[M] = { 0 };
//		digitsOfNumber(arr[i], digit1);
//		if (Narcissistic(digit(arr[i]), digit1, arr[i])) 
//		{
//			printf("%d\n", arr[i]);
//		}
//	}
//}
//int main(void)
//{
//	int arr[N] = { 0 };
//	for (int i = 0; i < N; i++)//�������ʼ��Ϊ1-100000
//	{//��֪0������������û��λ������ˮ�ɻ���Ҫ��Ϊ������
//		arr[i] = i+1;
//	}
//	print(arr,N);
//	return 0;
//}

//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
//#define N 5
//int sum(int a)
//{
//	int b = a;
//	int Sn = 0;
//	for (int i = 0; i < N; i++)
//	{
//		Sn += b;
//		b = b * 10 + a;
//	}
//	return Sn;
//}
//int main(void)
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("Sn = %d", sum(a));
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#define N 10
//void ExchangeMin(int min, int n, int arr[N])
//{
//    int term = 0;
//    term = arr[min];
//    arr[min] = arr[0];
//    arr[0] = term;
//}
//void ExchangeMax(int max, int n, int arr[N])
//{
//    int term = 0;
//    term = arr[max];
//    arr[max] = arr[n - 1];
//    arr[n - 1] = term;
//}
//void Find_Min_Max(int n, int arr[N])
//{
//    int i = 0;
//    int min = 0;
//    int max = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (arr[min] > arr[i])
//        {
//            min = i;
//        }
//    }
//    ExchangeMin(min, n, arr);
//    for (i = 0; i < n; i++)
//    {
//        
//        if (arr[max] < arr[i])
//        {
//            max = i;
//        }
//    }
//    ExchangeMax(max, n, arr);
//}
////5
////9 5 2 1 6
//int main(void)
//{
//    int i = 0;
//    int n = 0;
//    int arr[N] = { 0 };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    Find_Min_Max(n, arr);
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//
//}
#include<stdio.h>
#include<string.h>
#define N 10
//void Sorting(int n, int arr[N])
//{
//    int i = 0;
//    int j = 0;
//    int max = 0;
//    int good[N] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (arr[max] <= arr[j])
//            {
//                max = j;
//            }
//        }
//        good[i] = arr[max];
//        arr[max] = 0;
//    }
//    for (i = 0; i < n; i++)
//    {
//        arr[i] = good[i];
//    }
//}
// void Sorting(int n, int arr[N]) {
void Sorting(int n, int arr[N]) 
{
    int i = 0;
    int j = 0;
    int max_index = 0;
    for (i = 0; i < n - 1; i++) 
    { // ֻ��Ҫѭ���������ڶ���Ԫ��
        max_index = i;
        for (j = i + 1; j < n; j++) 
        {
            if (arr[j] > arr[max_index])
            {
                max_index = j;
            }
        }
        if (max_index != i) 
        { // ����ҵ������ֵ���ǵ�ǰλ�ã���������
            int temp = arr[i];
            arr[i] = arr[max_index];
            arr[max_index] = temp;
        }
    }
}
//6
//53 23 1 2 - 9 0
int main(void)
{
    int i = 0;
    int n = 0;
    int arr[N] = { 0 };
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    Sorting(n, arr);
    for (i = 0; i < n; i++)
    {
        if (i == (n - 1))
        {
            printf("%d", arr[i]);
            break;
        }
        printf("%d ", arr[i]);
    }
    return 0;

}