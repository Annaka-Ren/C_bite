#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//int main(void)
//{
//	//printf("c:\test\test.c");//ת���ַ���ת����ԭ������˼
//	printf("ab\ncd");//\t(ˮƽ�Ʊ��)
//	return 0;
//}
//int main(void)
//{
//	//printf("(are you ok??)");//??) -- ] - ����ĸ��
//	////(are you ok]
//	//printf("%c\n", '\'');
//	printf("%s\n","abc");
//	printf("%s\n", "a");
//	printf("%s\n", "\"");
//	printf("c:\\test\\test.c");
//	printf("\a\a\a\a\a\a\a\a\a\a\a");
//	//printf�ڴ�ӡ����ʱ������ָ����ӡ�ĸ�ʽ
//	return 0;
//}
////printf("%d", 100);
////printf("%c", 'a');
////pringt("%s", "abc");
//int main(void)
//{
//	//printf("%c\n",'\130'); //8���Ƶ�130��ʮ���Ƶ�88
//	//X == AS||��ֵΪ88
//	//printf("%c\n", '\101');//A - 65 - 8����Ϊ101
//	//printf("%d\n", strlen("abc"));//3
//	printf("%d\n",strlen("c:\test\328\test.c"));
//	return 0;
//}
//C���Է��֧��Ƕ��ע��/**/
//C++���Է�����ע��һ��Ҳ����ע�Ͷ���//
//int main()
//{
//	int input = 0;//�����ֵ
//	printf("�������:>\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)?>");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("��offer\n");
//	}
//		
//	else
//	{
//        printf("������\n");
//	}
//		
//	return 0;
//}

//int main(void)
//{
//	int line = 0;
//	//ѭ��
//	while(line < 30000)
//	{
//		printf("д����:%d\n", line);
//		line++;
//    }
//	if (line == 30000)
//	{
//
//		printf("��offfer\n");
//	}
//	return 0;
//}
//Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main(void)
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	/*int sum = num1 + num2;*/
//	//�����ķ�ʽ���
//	int sum = Add(num1, num2);
//	printf("%d\n", sum);
//
//	return 0;
//}
//int main(void)
//{
//	//���飻һ����ͬ���͵�Ԫ�صļ���
//	//10������1-10������
//	//����ʹ���±������ʵ�(�±��0��ʼ)
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	while(i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	//char ch[5] = { 'a', 'b', 'c' };//����ȫ��ʼ����ʣ���Ĭ��Ϊ0
//	return 0;
//}
//int main(void)
//{
//	//int a = 9 / 2;
//	//float a = 9 / 2.0;
//	int a = 9 % 2;//% - ȡģ��ȡ�ࣩ
//	printf("%.1d\n", a);
//	return 0;
//}
//int main(void)
//{
//	int a = 2;
//	//int b = a << 1;//���Ʋ����� - �ƶ����Ƕ�����λ
//	a = a + 5;//��ֵ
//	a += 5;//���ϸ�ֵ	a + b:+��������������˫Ŀ������
//	//��Ŀ��������ֻ��һ���������Ĳ�����(-,+)
//	printf("%d\n", b);
//	return 0;
//}
//int main(void)
//{
//	//0��ʾ�٣���0������
//	int a = 10;
//	printf("%d\n", !a);//!:�����ɼ٣��Ѽٱ����
//
//	if (a)
//	{
//
//		//���aΪ�棬����
//	}
//	if (!a)
//	{
//
//		//���aΪ�٣�����
//	}
//	a = -5;
//	a = -a;
//	a = +a;
//
//	return 0;
//}

//int main(void)
//{
//	//sizeof��һ��������
//	//sizeof��������ſ���ʡ�ԣ�˵���䲻�Ǻ��������������ʡ�����ţ�������ʱ����ʡ��
//	// ͨ������ʡ�����ţ�ֻ��֧��
//	//�������ͻ��߱����Ĵ�С��
//	int a = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(a));
//	return 0;
//}

int main(void)
{//��μ���һ�������Ԫ�ظ���
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//�������������ܴ�С����λ���ֽ�
	printf("%d\n", sizeof(arr[0]));//4
	int sz = sizeof(arr) / sizeof(arr[0]);//strlen�Ǽ����ַ��ĸ�����sizeof�Ǽ����ֽڵĸ���
	printf("%d\n", sz);
	return 0;
}