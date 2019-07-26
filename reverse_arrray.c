//reverse of an array using iterative approach
#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[]){
	int a=argc-1;
	int arr[a];
	int i,j=1;
	for(i=0;i<a;i++)
	{
		arr[i]=atoi(argv[j]);
		j++;
	}
	int start,end,k=argc-2;
	for(i=0;i<a;i++)
	{
		if(i<k)
		{
		start=arr[i];
		end=arr[k];
		int temp;
		temp=start;
		start=end;
		end=temp;
		k--;
		}
	}
	for(i=0;i<a;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
