#include<stdio.h>
int main(){
	char ch = 'a';//�����ڴ��п���1Byte�� 
	//�ַ��ڼ�����洢��ʱ�򣬴洢�Ķ����ַ���ASCII��
	printf("ch = %c\n",ch); 
	printf("ch ascii = %d\n",ch);
	//����'1'-1�Ľ���� 48
	char ch2 = '1';
	int a = 1;
	printf("%d\n",(ch2-a));
	return 0;
} 
