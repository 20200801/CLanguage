#include<stdio.h>
int main(){
	//1.���ͳ��� -100 1000 0
	int a = 100; 
	printf("a=%d\n",a);
	//2.ʵ�ͳ���2.5  34.67
	float b = 12.3;//�����ȸ�����
	printf("b=%f\n",b); 
	float c= 12.5e3;//12.5����10��3�η�
	//e��E������
	printf("c=%f\n",c); 
	float d = 2.3e-2;//2.3����10��-2�η�
	printf("d = %f\n",d);
	//3.�ַ�����
	char e = '?';
	printf("e = %c\n",e);
	//ת���ַ�
	char f= '\n';//�س����� 
	printf("f = %c\n",f);
	printf("hel\thello\n");
	printf("\c");
	char g ='\110';//�˽��ƶ�Ӧ���ַ�   65
	printf("g = %c\n",g);
	char h='\x41'; //ʮ�����ƶ�Ӧ���ַ�
	printf("h = %c\n",h);
	//4.�ַ������� 
	char i[] = "abcd";
	printf("i=%s\n",i);
	//'a'   "a" 
	return 0;
} 
