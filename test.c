#define _CRT_SECURE_NO_WARNINGS


#include<string.h>
#include<stdio.h>
#include"add.h"


//int main()
//{
//
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d  ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	//�ݹ�
//	print(num);
//
//	return 0;
//}


//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//		 
//	}
//	return count;
//}


//�ݹ鷽��
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
//my_strlen("bit")
//1+my_strlen("it")
//1+1+my_strlen("t")
//1+1+1+my_strlen("")
//1+1+1+0
//= 3

int main()
{
	char arr[] = "bit";
	//int len = strlen(arr);//���ַ�������
	//printf("%d\n", len);
	int len = my_strlen(arr);
	printf("len = %d\n", len);
	return 0;
}