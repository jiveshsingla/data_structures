//selection sort
#include <iostream>
using namespace std;
int main(int argc,const char*argv[])
{
    int x=0,y,z,i,j=0,flag;
    int size,l=2;
    size=atoi(argv[1]);
    int arr[size];
    for(i=0;i<size;i++){
        arr[i]=atoi(argv[l]);
        l++;
    }
    for(j=0;j<size-1;j++){
        x=arr[j];
        z=x;
        for(i=j+1;i<size;i++){
            if(arr[i]<x){
                x=arr[i];
                y=i;
                flag=0;
            }}
            if(flag==0){
            arr[y]=z;
            arr[j]=x;}
            flag=1;
        }
        for(i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    return 0;
}
