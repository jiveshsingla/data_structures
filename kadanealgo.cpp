#include<iostream>
using namespace std;
void kadane(int *arr,int n)
{
	int max=0,sum=0,i;
	int start=0,end=0;
	for(i=0;i<n;i++)
	{
			sum+=arr[i];
			if(sum<0)
				sum=0;
			if(max<sum)
				max=sum;
	}
	cout<<"maximun length "<<max;
}
int main(int argc,const char * argv[]){
	int n;
	cin>>n;
	int arr[n];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	kadane(arr,n);
	return 0;
}
