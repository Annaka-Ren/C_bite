#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(void)
{
	char pin [6];
	printf("����˭ѽ��\n");
	printf("������������֣�����\n");

		//fgets("%s",pin);
	fgets(pin, sizeof(pin), stdin);
        //ʹ�� scanf() ������ȡ����������Ϊ���룬�����ڶ�����ʣ���ʹ�� fgets() ����
		if (strcmp(pin, "Annaka") != 1)
			//Ϊʲô��if (strcmp(pin, "Annaka") == 0)ʱ�Ͳ����أ�
		//if (pin = "Annaka");
		
		{
			printf("��ӭʹ�ã�\n");
		}
		if (strcmp(pin, "Annaka") == 1)
		{
		    printf("����������\a\n" );
	    }
	return 0;
}