#include<stdio.h>
int main(){
	void print_info();
	int sum(int,int);//int sum(int a,int b);
	
	print_info();
	int x =3;
	int y = 4;
	int s = sum(x,y);//ʵ�� ��ʵ�ʲ����� 
	printf("s = %d",s);
	return 0;	 
}
void print_info(){
	printf("hello world!\n");
} 
//�����������ĺ� 
//�β� 
int sum(int a,int b){//����ִ����󣬻����int���͵�ֵ�� 
	int c = a+b;
	return c;
} 
