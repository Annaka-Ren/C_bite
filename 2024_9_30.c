#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(void)
{
	char pin [6];
	printf("你是谁呀？\n");
	printf("请输入你的名字！！！\n");

		//fgets("%s",pin);
	fgets(pin, sizeof(pin), stdin);
        //使用 scanf() 函数获取单个单词作为输入，而对于多个单词，则使用 fgets() 函数
		if (strcmp(pin, "Annaka") != 1)
			//为什么用if (strcmp(pin, "Annaka") == 0)时就不行呢？
		//if (pin = "Annaka");
		
		{
			printf("欢迎使用！\n");
		}
		if (strcmp(pin, "Annaka") == 1)
		{
		    printf("滚开！！！\a\n" );
	    }
	return 0;
}