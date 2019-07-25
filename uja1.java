//to find pairs of numbers whose sum is equal to the input sum
import java.util.*;
	class uja1{	
		public static void main(String args[]){
				Scanner sc=new Scanner(System.in);
				int a=sc.nextInt();
				int arr[]=new int[a];
				int sum=0,count=0,i,j,k,l,temp;
							for(i=0;i<a;i++){
								arr[i]=sc.nextInt();}
				int r=sc.nextInt();
				sum=sc.nextInt();
							for(i=0;i<r;i++){
								temp=arr[0];
									for(j=0;j<a-1;j++){
										arr[j]=arr[j+1];}
										arr[a-1]=temp;
									}
							l=1;j=0;
							for(i=0;i<a-1;i++){
								for(k=l;k<a;k++){
									if(sum==(arr[j]+arr[k])){
									count++;
									System.out.println("pair "+count + " = " +arr[j]+","+arr[k]);}}
									l++;j++;}
				System.out.println("total pairs whose sum is "+ sum +" = " +count);
}
}
