#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//int main(void)
//{
//	srand((unsigned int)time(NULL));
//	//rand()--> 0`32767
//	printf("%d\n", rand() % 100 + 1);//0`99 --> 1~100
//	printf("%d\n", rand() % 101 + 100);//0~100 +100 -->100~200
//	//a + rand()%(b-a+1) <-- a~b
//
//	return 0;
//}

//����һ�κ����������棬�ǿ���ֱ����ģ�����Ҫ�˳���Ϸ
//1.����Ϸ
//0.�˳���Ϸ


//���庯������װ
//void menu()
//{
//	printf("--------------------------------\n");
//	printf("--------------1.����Ϸ----------\n");
//	printf("--------------0.�˳���Ϸ--------\n");
//	printf("--------------------------------\n");
//}
//
//void game()
//{
//	int guess = 0;
//	//��Ϸ��ʵ��
//	//1.���������
//	int r = rand() % 100 + 1;
//	//printf("r = %d\n", r);
//	//2.������
//	int count = 5;
//	while (count)//5,4,3,2,1,
//	{
//		printf("ʣ��%d�λ���", count);
//		printf("������\n");
//	    scanf("%d", &guess);
//	    if (guess > r)
//		    printf("�´���");
//	    else if (guess < r)
//		    printf("��С��");
//	    else
//	    {
//		 printf("�¶��ˣ�");
//		 break;
//	    }
//		count--;
//	}
//	if (count == 0)
//	{
//		printf("��Ϸʧ��\n");
//	}
//	
//}
//int main(void)
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//
//	do
//	{
//		menu();//�����ĵ���
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��ɲ�������Ϸ��ʵ��
//			printf("��������Ϸ\n");
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������������");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int main(void)
//{
//	int a = 20;//�����ĳ�ʼ��
//	int arr[5];//����array
//	float arr2[7];
//	char arr3[3];
//	return 0;
//}

//����һ���г�ʼ����ʱ����ʵ����Ĵ�С�ǿ���ʡ�Ե�

//int main(void)
//{
//	int arr5[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr6[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//���ݳ�ʼ��������ȷ��Ԫ�ظ���
//	int arr7[] = { 1, 2, 3, 4};//���ݳ�ʼ��������ȷ��Ԫ�ظ���
//
//
//	//����ĳ�ʼ��
//	//int arr[5] = { 1, 2, 3, 4, 5 };//��ȫ��ʼ��
//	//int arr2[5] = { 1, 2, 3 };//���ֳ�ʼ����ʣ�ಿ��Ĭ�ϳ�ʼ��Ϊ0
//	//int arr3[5] = { 0 };
//	return 0;
//}
//int main(void)
//{
//	int arr[10] = { 0 };//arr�����������int [10]
//	int arr2[] = { 0 };
//	return 0;
//}
//int main(void)
//{
//	int a = 0;
//	int arr[10] = { 0 };//10 * 4 = 40
//	printf("%zd\n", sizeof(arr));//40
//	printf("%zd\n", sizeof(int[10]));//40
//	printf("%zd\n", sizeof(int[5]));//20
//	return 0;
//}
//int main(void)
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", arr[7]);
//	arr[7] = 70;
//	printf("%d\n", arr[7]);
//	return 0;
//}
//[]���������±����(����)��������arr��6�ǲ�����
