#include<stdio.h>
int main(){
	float a = 2;//���� 
	float b = 1;//��ĸ
	float sum = 0.0f;//��
	for(int i=1;i<=20;i++){
		sum = sum+a/b;
		a = a+b;//�µķ��� 
		b = a-b;//�µķ�ĸ 
	} 
	printf("%f",sum);
	//1.sum = 0+2/1  a = 3 b =2
	//2.sum = 0+2/1+3/2 a=5 b=3
	//3.sum = 0+2/1+3/2+5/3
	return 0;	 
}


