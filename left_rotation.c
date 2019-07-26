//left rotation by n in an array
#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char * argv[]){
	int a=argc-1;
	int i,j=1;
	int arr[a];
	for(i=0;i<a;i++)
	{
		arr[i]=atoi(argv[j]);
		j++;
	}
	int n=3; //left rotate by n numbers
	for(i=0;i<n;i++)
	{
		int temp;
		temp=arr[0];
		int k;
		for(k=0;k<argc-2;k++)
		{
			arr[k]=arr[k+1];
		}
		arr[argc-2]=temp;
	}
	for(i=0;i<argc-1;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
