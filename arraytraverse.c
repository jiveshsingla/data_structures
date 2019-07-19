#include<stdio.h>
#include<stdlib.h>
int main(int args,const char * argv[]){
	int a=5;
	int i;
	int arr[a];
	int j=1;
	for(i=0;i<5;i++)
	{
		arr[i]=atoi(argv[j]);
		j++;
	}
	int arr1[a];
	j=0;
	int *ptr=&arr[4];
	for(i=0;i<5;i++)
	{
		printf("%d",*(ptr-i));
	}
	return 0;
}
		
