#include <stdio.h>
#include<stdlib.h>
void remove_duplicates(char str1[]);
int main(){
    char str1[50];
    scanf("%s",str1);
        remove_duplicates(str1);
    return 0;
}
 void remove_duplicates(char str1[]){
 int x1=strlen(str1)-1;
 char str2[50];
 int i=0,j=0,max=0,max1=0;
 char a;
 while(str1[i]!=NULL){
  for(j=i+1;j<=x1;j++){
	  if(str1[i]==str1[j]&&str1[j]!=' '){

                                                                str1[j]=' ';
								//printf("%s\n",str1);
                                                                        max++;
									
                                                                    }
  								}   
                                                    if(max>max1){
                                                                max1=max;
							
                                                                a=str1[i];
								//printf("%c the value\n",a);
                                                            }
                                        i++;max=0;
                                    }
    i=0;j=0;
        while(str1[i]!=NULL){
            if(str1[i]!=' '){
                str2[j]=str1[i];
                    j++;
                }
            i++;
        }
    str2[j]='\0';
    printf("%s",str1);
    printf("maximum occuring element is : %c",a);
}
