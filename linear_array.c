//linear search in an array
#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char*argv[]){
	int arr[argc-1];
	int a=5;
	int i,j=1;
	for(i=0;i<argc-1;i++)
	{
		arr[i]=atoi(argv[j]);     //input an array
		j++;
	}
	for(i=0;i<argc-1;i++)
	{
		if(arr[i]==a)
			printf("%d found at %d",a,i);	//linear searching
		else
			printf("%d not found",a);
	}
	return 0;
}
