#include<stdio.h>
#include<string.h>
int main(){//string---�ַ��� 
	char str1[] ="I love china!";
	//1.����ַ���
	puts(str1); //ͬprintf("%s",str1);
	//2.����һ���ַ���
//	char str2[10];
//	gets(str2);
//	puts(str2);
	//3.�ַ������Ӻ���strcat(�ַ���1,�ַ���2);
	//���ܣ����ַ���2��ƴ�ӵ��ַ���1�С�
	char str3[] = "hello"; 
	char str4[] = "world";
	strcat(str3,str4);//
	puts(str3);
	puts(str4);
	//4.�ַ����ĸ���strcpy(�ַ���1,�ַ���2)
	//���ܣ����ַ���2���Ƶ��ַ���1�С� 
	char str5[10];
	char str6[]="hello";
	strcpy(str5,str6);
	puts(str5); 
	//str5=str6;
	//5.�ַ����ȽϺ���strcmp(�ַ���1,�ַ���2)
	//�����ַ�����ȣ�����0;
	//�ַ���1<�ַ���2,����-1��
	//�ַ���1>�ַ���2,����1�� 
	//1.�����ֵ��˳��Ƚϴ�С�ģ�Խ����Խ��
	//2.Сд��ĸ>��д��ĸ  a>A
	//3.������ֲ�ͬ���ַ������Ե�һ����ͬ���ַ��Ƚ�Ϊ׼
	char str7[] ="helloa";
	char str8[]="hellob";
	printf("%d\n",strcmp(str7,str8)); 
	//6.����ַ�����ʵ�ʳ���strlen()
	char str9[] = "hello";//5 
	printf("%d\n",strlen(str9));//ʵ�ʳ��ȣ� 
	printf("%d\n",sizeof(str9));//ռ���ռ䣿
	//7.���ַ���ת��ΪСдstrlwr() lowercase
	char str10[] ="BBBB";
	strlwr(str10);
	puts(str10);
	//8.���ַ���ת��Ϊ��д strupr() upercase
	strupr(str10);
	puts(str10);
	return 0;
}

