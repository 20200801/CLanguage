#include<stdio.h>
int main(){
	int a[10]; 
	//1.����10���� 
//	for(int i=0;i<=9;i++){//&a[0]
//		scanf("%d",&a[i]); 
//	} 
	for(int i=0;i<=9;i++){//a+1
		scanf("%d",a+i);
	}
	//2.��ƽ����
	float avg,sum = 0; 
	for(int i=0;i<=9;i++){
		sum = sum +a[i];
	}
	avg = sum/10;
	//3.ͳ�Ʊ�ƽ�����ٵĸ���
	int j = 0; 
	for(int i=0;i<=9;i++){
		if(avg>a[i]) j++;
	}
	printf("%d,%f",j,avg);
	return 0;
}

