#include<stdio.h>
int main(){
	int apple(int n,int k);
	int s = apple(3,5);
	printf("%d",s);
	return 0;	 
}
int apple(int n,int k){//��ʾn��k�η� 
	if(k==0) return 1;
	else return apple(n,k-1)*n; 
}
