#include<stdio.h>
int main(){
	void  inv(int a[],int n);
	int a[10] = {1,2,3,4,5,6,7,8,9,0};
	int *p = a;//int *p = &a[0];
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
void  inv(int a[],int n){
	int i;//����ǰ�벿�ֵ��±� 
	int j; //�����벿�ֵ��±�
	int temp;//��ʱ�ռ�
	int m =  n/2; //101/2=50��������
	for(i=0;i<m;i++){
		j=n-1-i;//9=10-1=n-1-0   8=n-1-1  7=n-1-2 6=n-1-3
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	} 
}
