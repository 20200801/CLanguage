#include<stdio.h> 
#include<string.h>
typedef struct {
	int num;//ѧ��
	char name[20];//����
	char sex;//�Ա�
	char addr[30];//��ַ 
}abc;
int main(){
	abc stu_1;
	stu_1.num = 200101;
	strcpy(stu_1.name,"zhangsan");
	stu_1.sex = 'F';
	strcpy(stu_1.addr,"taiyuan");
	printf("%d %s %c %s\n",
	stu_1.num,stu_1.name,stu_1.sex,stu_1.addr);
	return 0;	 
}

