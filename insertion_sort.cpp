#include<iostream>
using namespace std;
int main(int argc,const char * argv[])
{
    int i,j,k,temp,flag,l=2;
    int size;
    size=atoi(argv[1]);
    int arr[size];
    for(i=0;i<size;i++)
    {
        arr[i]=atoi(argv[l]);
        l++;
    }
    for(k=0;k<size;k++){
        flag=0;
        for(i=0;i<size-1;i++){
            j=i+1;
            if(arr[i]>arr[j]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                flag=1;
            }
        }
        if(flag==0)
        break;
    }
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
