#include<stdio.h>
int main(){ 
	printf("����������ֵ\n");
	int m;
	int n;
	scanf("%d%d",&m,&n);
	//1.��m��n��С���Ǹ���
	int temp;//������С���Ǹ���
	if(m>n) temp =n;
	else temp =m;
	//2.����Сֵ��ʼ����ֱ��m��n��һ�α�ͬʱ����������ѭ��
	int i;
	for(i = temp;i>0;i--){
		if(m%i==0&&n%i==0){
		printf("���Լ��Ϊ��%d\n",i);	break;
		}
	} 
	int lcm;//
	lcm = m * n /i;
	printf("��С������Ϊ��%d\n",lcm);
	return 0;
} 
