#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char*argv[])
{
	char str1[15]="hello world";
	char str2[]="hello%world";
	char str3[]={'h','e','l','l','o',' ','w','o','r','l','d','\0'};
	char str4[12];
	strcpy(str4,str3);
	int size=strlen(str1);
	printf("%s\n",str1);
	printf("%s\n",str2);
	puts(str3);
	printf("%u\n",str3);
	printf("%u\n",str4);
	printf("%d\n",size);
	char *str5[10];
	scanf("%s",str5);
	printf("%s\n",str5);
	const char *str6="hello world";
	printf("%s\n",str6);
	return 0;
}
