#include<stdio.h>
int main(){
	void fun1(int);
	void fun2(int[]);
	int x = 10;
	fun1(x);//���򴫵ݵ�ֵ 
	printf("x = %d\n",x);
	int y = 10;
	fun2(&y);//���򴫵ݵĵ�ַ 
	printf("y = %d\n",y);
	return 0;	 
}
void fun1(int a){
	a = 100;
} 
void fun2(int a[]){
	a[0] = 100;
}
