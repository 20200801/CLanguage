#include<stdio.h>
int main(){
	char str1[] = "helloworld"; 
	//str1��ʾԪ��h�ĵ�ַ \0��β 
	printf("%s\n",str1); 
	//ָ���ַ��� 
	char *str2 = "I love you!"; 
	//str2��ʾ�ַ�����һ��Ԫ��I�ĵ�ַ��
	//Ҳ����˵��ָ��str2ָ��Ԫ��I���ַ�����\0��β. 
	printf("%s\n",str2);
	printf("%c\n",*str2);
	printf("%c\n",*(str2+3));
	char s[20] = "beijing";
	char *p;
	p = s+1;
	printf("%c\n",p[0]);
	printf("%c\n",*p);
	printf("%c\n",*(s+1));
	printf("%c\n",s[1]);
	return 0;	 
}

