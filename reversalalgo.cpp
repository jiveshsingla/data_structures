#include<iostream>
using namespace std;
void swap(int arr[],int start,int end){
	int temp;
	while(start<end)
	{
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}
void reverse(int arr[],int k,int n,int l)
{
	if(l==1)
	{
	swap(arr,0,n-1);
	swap(arr,0,k-1);
	swap(arr,k,n-1);
	}
	if(l==0)
	{
		swap(arr,0,k-1);
		swap(arr,k,n-1);
		swap(arr,0,n-1);
	}
}
void print(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int i,j,l,k;
	cout<<"size of array";
	cin>>i;
	int arr[i];
	cout<<"enter array";
	for(j=0;j<i;j++)
	{
		cin>>arr[j];
	}
	cout<<"enter rotations";
	cin>>k;
	cout<<"left or right";
	cin>>l;
	reverse(arr,k,i,l);
	print(arr,i);
	return 0;
}
