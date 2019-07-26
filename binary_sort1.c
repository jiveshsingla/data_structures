//binary sorting
#include<stdio.h>
#include<stdlib.h>
int binary_search(int* ,int,int,int);
int main(int argc,const char *argv[])
{
	int arr[argc-1];
	int i,j=1;
	for(i=0;i<argc-1;i++)
	{
		arr[i]=atoi(argv[j]);
		j++;
	}
	int num=2;
	int h=argc-1;
	printf("%d",binary_search(arr,0,h,num));
	return 0;
}
int binary_search(int arr[],int l,int h,int num)
{
	int mid=l+(h-l)/2;
	if(l>h)
		return -1;
	if(arr[mid]==num)
		return mid;
	if(num<arr[mid])
		return binary_search(arr,0,mid-1,num);
	else
		return binary_search(arr,mid+1,h,num);
}
