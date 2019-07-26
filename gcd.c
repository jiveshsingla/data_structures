//GCD of two numbers
#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char * argv[]){
	int a=argc-1;
	int arr[a];
	int i,j=1;
	for(i=0;i<a;i++)
	{
		arr[i]=atoi(argv[j]);
		j++;
	}
	int min=arr[0];
	for(i=1;i<a;i++)
	{
		if(min>arr[i])
			min=arr[i];
	}
	int flag=0;
	for(i=1;i<min;i++)
	{
		for(j=0;j<a;j++)
		{
			if(arr[j]%i!=0)
				flag=0;
			break;
		}
	}
	if(flag==1)
	printf("%d gcd= ",i);
	return 0;
}

