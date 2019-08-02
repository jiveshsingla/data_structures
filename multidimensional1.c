#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char*argv[])
{
	int r,c;
	//scanf("%d%d",&r,&c);
	r=atoi(argv[1]);
	c=atoi(argv[2]);
	int arr[r][c];
	//int **arr;
	//arr=ptr;
	int i,j,k=3;
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				//scanf("%d",(*(arr+i)+j));
				*(*(arr+i)+j)=atoi(argv[k]);
				k++;
				}
			}
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				printf("%d",*(*(arr+i)+j));
				}
			}
	return 0;
}
