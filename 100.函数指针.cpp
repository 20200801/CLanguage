#include<stdio.h>
int main(){//RGB 
	int max(int,int);
	int add(int,int);
	int (*p)(int,int);//����ָ��һ��������ָ�롣
	//����ֵΪint���ͣ������� 2������������ÿ��������
	//����Ϊint�ĺ��� 
	p = max; //���������Ʊ�ʾ�������ĵ�ַ 
	int z = (*p)(7,8); 
	printf("%d\n",z);
	p = add;
	z = (*p)(7,8);
	printf("%d\n",z);
	return 0;	 
}
int max(int x,int y){
//	if(x>y)return x;
//	else return y;
	int z = (x>y)? x:y;
	return z; 
} 
int add(int x,int y){
	return (x+y);
}
