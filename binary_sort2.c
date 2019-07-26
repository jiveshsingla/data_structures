//binary search using pivot element
#include<stdio.h>
#include<stdlib.h>
int binary_search(int*,int,int,int);
int main(int argc,const char*argv[]){
	int arr[argc-1];
	int i,j=1;
	for(i=0;i<argc-1;i++)
	{
		arr[i]=atoi(argv[j]);
		j++;
	}
	int num=2;
	printf("%d",binary_search(arr,0,argc-1,num));
			return 0;
			}
int binary_search(int arr[],int l,int h,int num)
{
	int mid=l+(h-l)/2;
	if(l>h)
	return -1;
	if(arr[mid]==num)
	return mid;
	if(arr[mid]>arr[l]){
	if(num>=arr[l]&&num<arr[mid])
	return binary_search(arr,l,mid-1,num);
	return binary_search(arr,mid+1,h,num);}
	if(num>=arr[mid+1]&&num<=arr[h])
		return binary_search(arr,mid+1,h,num);
		return binary_search(arr,l,mid-1,num);
}

