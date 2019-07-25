//1st half left rotate and 2nd half right rotate
import java.util.*;
	class uja1{
		public static void main(String args[]){
				Scanner sc=new Scanner(System.in);
				int a=sc.nextInt();
				int arr[]=new int[a];
				int j,temp,i,size,k;
							for(i=0;i<a;i++){
								arr[i]=sc.nextInt();}
				int r=sc.nextInt();
				k=a+1;
				k=k/2;
				size=a/2;
							for(i=0;i<r;i++){
								temp=arr[0];
									for(j=0;j<size-1;j++){
										arr[j]=arr[j+1];}
										arr[size-1]=temp;
										temp=arr[a-1];
											if(a%2==0){
										for(j=a-1;j>size;j--){
										arr[j]=arr[j-1];}
										arr[size]=temp;}

											else{
for(j=a-1;j>size+1;j--){
										arr[j]=arr[j-1];}
										arr[k]=temp;}}
							for(i=0;i<a;i++){
							System.out.print(arr[i]);}
}
}
