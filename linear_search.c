//linear search in an array
#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char*argv[]){
	int arr[argc-1];
	int i,j=1;
	for(i=0;i<argc-1;i++)
	{
		arr[i]=atoi(argv[j]);    //input in an array
		j++;
	}
	int a=10;  //number to be found
	int flag=0,b;
	for(i=0;i<argc-1;i++)
	{
		if(arr[i]==a)
			flag=1;
			b=i;
	}
		if(flag==1)
			printf("%d found at position %d",a,b);
		else
			printf("%d not found",a);
	return 0;
}
