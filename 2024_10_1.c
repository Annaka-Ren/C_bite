#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//int main(void)
//{
//	int line = 0;
//	while (line < 30000)
//	{
//
//		printf("д����:%d\n", line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("���\n");
//	}
//	return 0;
//}
//int main(void)
//{
//	int magic, number;
//	magic = rand() % 5 + 1;
//	scanf("%d", &number);
//	if (number == magic)
//	{
//		printf("right\n");
//	}
//	else {
//		printf("wrong");
//	}
//	return 0;
//}
//int main(void)
//{
//    double x, y;
//    scanf("%lf", &x);//������ˮ��x
//
//    if (x < 0)//�ֶμ���ˮ��
//    {
//        y = 0;
//    }
//    if(x <= 15)
//    {
//        y = 4 * x / 3;
//    }
//    if(x > 15)
//    {
//        y = 2.5 * x - 10.5;
//     }
//    printf("%.2f", y);
//
//    return 0;
//}
int main(void)
{
	int d;
	int line = 0;
		while (line < 100)
		{
			printf("������������:%d%%\n", line);
			line++;
		}
		if (line == 100)
		{
			printf("���������ɹ�\n");
		}
	printf("��������Ҫ��ѯ��������������\n");
	scanf("%d", &d);
		switch (d)
		{
		  case 1: printf("������\n��ϲ����ѯ�ɹ���\n"); break;
		  case 2: printf("������\n��ϲ����ѯ�ɹ���"); break;
		  case 3: printf("ˮ����\n��ϲ����ѯ�ɹ���"); break;
		  case 4: printf("ľ����\n��ϲ����ѯ�ɹ���"); break;
		  case 5: printf("������\n��ϲ����ѯ�ɹ���"); break;
		  case 6: printf("������\n��ϲ����ѯ�ɹ���"); break;
		  case 7: printf("������\n��ϲ����ѯ�ɹ���"); break;
			default: printf("��ѯʧ�ܣ�����\a\n");
		}
	return 0;
}