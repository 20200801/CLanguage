#include<stdio.h>
int main(){
	//��100-200֮�����е������� 
	int flag = 0;//0��ʾ����  1��ʾ�������� 
	for(int i=100;i<=200;i++){//101
		flag = 0;
		for(int j = 2;j<=i-1;j++){
			if(i%j==0){
				flag=1;
			} 
		}
		if(flag==0) printf("%5d",i);
	} 
	return 0;	 
} 
