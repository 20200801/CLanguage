#include<stdio.h>
int main(){
	int a = 17;
	int b = 5;
	int c; 
	c = a+b; //=��ֵ�����   +���������  
	//��������������ȼ����ڸ�ֵ����� 
	printf("c= %d\n",c);
	c = a-b;
	printf("c= %d\n",c);
	c = a*b;
	printf("c= %d\n",c);
	c = a/b;//17/5 = 3  int/int=int 
	printf("c= %d\n",c);
	c = a%b;//2.3%2
	printf("c= %d\n",c);
	//%���ߵ�ֵ������������ 
	//printf("c= %d\n",2.3%2.3);���� 
	return 0;
} 
