#include<stdio.h>
int main(){
	void  inv(int *a,int n);
	int a[10] = {1,2,3,4,5,6,7,8,9,0};
	int *p = a;
	for(int i=0;i<=9;i++){
		printf("%d\t",*(p+i));
	}
	printf("\n");
	inv(a,10);
	for(int i=0;i<=9;i++){
		printf("%d\t",*(p+i));
	}
	return 0;	 
}
void  inv(int *a,int n){
	int *i,*j;
	i = a;//ָ��iָ������ĵ�һ��Ԫ��
	j = a+n-1; //ָ��jָ����������һ��Ԫ��
	int m = n/2; 
	for(;i<(a+m);i++,j--){
		int temp = *i;
		*i = *j;
		*j = temp;
	}
}
