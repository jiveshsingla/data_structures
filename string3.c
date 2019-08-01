#include<stdio.h>

#include<stdlib.h>

void equal_string(char str1[],char str2[]);

int main()

{

    char str1[20];

    char str2[20];

    scanf("%s",str1);

    scanf("%s",str2);

        equal_string(str1,str2);

        return 0;

}

void equal_string(char str1[],char str2[])

{

            int i=0,count=0;

                if(strlen(str1)==strlen(str2)){

                                  while(str1[i]!=NULL){

                                   

                                             if(str1[i]==str2[i])

                                                count++;

                                                i++;

                                                 }

                                            }

        if(count==strlen(str1))

            printf("strings are equal");

        else

            printf("strings are not equal");

}
