#include<stdio.h>
	struct Student{
	int num;//ѧ��
	char name[20];//����
	char sex;//�Ա�
	char addr[30];//��ַ 
	}; 
int main(){
	struct Student stu[5]={
	{200201,"zhangsan",'F',"taiyuan"},
	{200202,"lisi",'F',"taiyuan"},
	{200203,"wangwu",'M',"taiyuan"},
	{200204,"zhaoliu",'F',"taiyuan"},
	{200205,"sunqi",'M',"taiyuan"}};
	for(int i=0;i<=4;i++){
		printf("%d %s %c %s\n",
		stu[i].num,stu[i].name,stu[i].sex,stu[i].addr);	
	}
	return 0;	 
}

