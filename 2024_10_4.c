#include<stdio.h>
//
//int main(void)
//{
//	{
//		auto int a = 10;//�Զ��������Զ����ٵ�--�Զ�����
//		//autoʡ�Ե���
//		//auto�µ�C�����﷨��Ҳ�������÷�
//	}
//	return 0;
//}
//int main(void)
//{
//	//����Ƶ����ʹ�õ����ݣ�����ڼĴ����У�����Ч��
//	register int num = 100;//����num��ֵ����ڼĴ�����
//	//define��include���ǹؼ��֣���Ԥ����ָ��
//
//	return 0;
//}
//typedef unsigned int u_int;
//
//int main(void)
//{
//	unsigned int num = 100;
//	u_int num2 = 100;
//
//	return 0;
//}

//static - ��̬��
//1.static���ξֲ�����
//2.static����ȫ�ֱ���
//3.static���κ���

//void test()
//{
//	static int a = 0;
//	a++;
//	printf("%d ", a);
//}
//int main(void)
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//static����ȫ�ֱ�����ʹ�����ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ���.c���ڲ�����ʹ��
//����Դ�ļ�����ʹ��

//����
//extern�����ⲿ���ŵ�

//ȫ�ֱ���������Դ�ļ��ڲ�����ʹ�ã�����Ϊȫ�ֱ��������ⲿ��������
//���Ǳ�static����֮�󣬾ͱ�����ڲ��������ԣ�����Դ�ļ��Ͳ������ӵ������̬��ȫ�ֱ�����
//extern int g_val;
//int main(void)
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//����8��������add.c����ɾ����
//ȫ�ֱ���
//static int g_val = 2024;
//static���κ���
//static int Add(int x, int y)
//{
//
//	return x + y;
//}
//static���κ�����ʹ�ú���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����������Դ�ļ��ڲ�ʹ��
//��������
//extern int Add(int x, int y);
//
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//define��һ��Ԥ����ָ��
//1.define�������
//#define MAX 1000
//
//int main(void)
//{
//	printf("%d\n", MAX);
//	return 0;
//}


//2,define�����
//#define ADD(X,Y) ((X) + (Y))
//
//int main()
//{
//	//              ADD(2, 3) ���滻��2+3
//	printf("%d\n", 4*ADD(2, 3));
//	//             4*2+3=11�������ȼ���
//	return 0;
//}
//int main()
//{
//	int a = 10;//a���ڴ���Ҫ����ռ�--4���ֽ�bit
//	printf("%p\n", &a);//%pר��������ӡ��ַ
//	int * pa = &a;//pa��������ŵ�ַ�ģ�pa��C�����н�ָ�����
//	//* ˵��pa��ָ�����
//	//int˵��paָ��Ķ�����int���͵�
//
//	char ch = 'w';
//	char * pc = &ch;
//
//	return 0;
//}
//ָ����ǵ�ַ
//int main(void)
//{
//	int a = 10; 
//	int * pa = &a;
//	//  *�����ò�����
//	*pa = 20;//�����ò���  *pa����ͨ��pa��ߵĵ�ַ���ҵ�a
//
//	printf("%d\n", a);
//
//	return 0;
//}
int main(void)
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	//ָ��Ĵ�С����ͬ�ģ�ָ����������ŵ�ַ��
	//ָ����Ҫ���ռ�ȡ���ڵ�ַ�Ĵ洢��Ҫ���ռ�
	//32λ  32bit - 4byte
	//64λ  64bit - 8byte

	return 0;
}