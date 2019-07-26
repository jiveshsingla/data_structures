//rotation by temp array
#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char * argv[])
{
        int a=argc-1;
        int i,j=1;
        int arr[argc-1];
        for(i=0;i<argc-1;i++) {
                arr[i]=atoi(argv[j]);           //input an array
                j++; }
        int n=100;    //number of rotations
	int x=n%a;
	int temp[x];
	j=2;
	for(i=x-1;i>=0;i--){	
		temp[i]=arr[argc-j];
		j++;}
        for(i=argc-1;i>1;i--){
               arr[i]=arr[i-2]; }
	for(i=0;i<x;i++) {
		arr[i]=temp[i];}
	for(i=0;i<a;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}

