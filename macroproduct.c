#include<stdio.h>
#include<stdlib.h>
#define product(a,b) a*b;
#define concat(a,b) a##b;
#define concat1(a,b) #a;
int main(int argc,const char *argv[]){
	int a,b;
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	int c,d;
	int *e;
	e=&c;
	c=product(a,b);
	printf("%d",c);
	d=concat(12,90);
	printf("%d",d);
	printf(__FILE__);
	//printf(__TIME__);
	printf("%p",&e);
	return 0;
}
