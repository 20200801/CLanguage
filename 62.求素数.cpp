#include<stdio.h>
int main(){
	int n;//Ҫ�жϵ������ 
	scanf("%d",&n);
	int i;
	for(i=2;i<=n-1;i++){
		if(n%i==0) break;
	} 
	//n=5
	//i=2  2<=4 (ok) 5%2
	//i=3  3<=4(ok)  5%3
	//i=4  4<=4(ok)  5%4
	//i=5
	if(i<n) printf("��������\n");
	else printf("������\n"); 
	return 0;
	//��100-200֮�����е������� 
} 
