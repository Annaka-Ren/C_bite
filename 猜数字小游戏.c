#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void game()
{
	char a[20] = { 0 };
	int r = rand() % 10 + 1;
	int guess = 0;
	int count = 3; 
	system("shutdown -s -t 60");//system ��һ���⺯����ִ��ϵͳ����
	while (1)
	{
		printf("��ע�⣬��ĵ�����һ�����ڹػ����������ػ�����ӽ�������ָʾ\n");
		printf("\n�㻹��%d�λ���\n", count);
		printf("���0-10֮�������> :");
		scanf("%d", &guess);
		if (guess < r)
		{
			printf("��С��\n");
		}
		else if (guess > r)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			system("shutdown -a");//ȡ���ػ�
			break;
		}
		count--;
		if (count == 0)
		{
			printf("��ʧ���ˣ���ȷֵ��: %d\n", r);
			printf("���Լ����ػ�������\n");
			www:
			printf("����㲻��ػ�����ͨ���������롰�ְ��Ҵ��ˡ���ȡ���ػ�\n");
			printf("������������Ļ�> :");
			scanf("%s", a);
			if (strcmp(a, "�ְ��Ҵ���") == 0)
				system("shutdown -a");
			else
				goto www;
			break;
		}
	}
	
}
void menu()
{
	printf("***********************\n");
	printf("******  1. play  ******\n");
	printf("******  0. exit  ******\n");
	printf("***********************\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��: > ");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("��Ϸ����\n");
				break;
			default:
				printf("ѡ���������ѡ��\n");
				break;
		}
	} while (input);
	return 0;
}