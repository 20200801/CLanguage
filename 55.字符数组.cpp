#include<stdio.h>
int main(){
	//1.�ַ����� 
	char a[10] = {'I',' ','l','o','v','e'}; 
	for(int i=0;i<=9;i++){
		printf("%c\n",a[i]); 
	} 
	//2.
	char b[]={"hello"};//�ַ��� 
	//�ַ���b���ڴ���ռ�˶��ٿռ䣿6Byte
	//�ַ���b����Ч�ַ���Ϊ��5 
	printf("%d\n",sizeof(b)); //
	for(int i=0;i<=5;i++){
		printf("%c",b[i]); 
	} 
	printf("\n",b);
	printf("%s\n",b);
	//3.
	char c[] = "hellohello"; 
	printf("%s",c);
	return 0;
}

