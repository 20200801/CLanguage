#include<stdio.h>
int main(){
	struct Student {
	int num;//ѧ��
	char name[20];//����
	char sex;//�Ա�
	char addr[30];//��ַ 
	}stu_1={201001,"zhangsan",'F',"beijing"};
	printf("%d %s %c %s\n",
	stu_1.num,stu_1.name,stu_1.sex,stu_1.addr);
	return 0;	 
}

