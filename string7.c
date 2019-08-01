#include <stdio.h>

#include<stdlib.h>

void uppercase_end(char str[],int);

int main()

{

    char str[20];

    scanf("%s",str);

    int x;

    x=strlen(str);

    uppercase_end(str,x);

    return 0;

}

void uppercase_end(char str[],int x)

{

    int i=0,j=0,k=0;

    char temp[20],temp1[20];

    while(str[i]!=NULL){

        if(str[i]>=65&&str[i]<=90){

            temp[j]=str[i];

            j++;}

        else{

        temp1[k]=str[i];

        k++;}

        i++;}

    temp[j]='\0';

    temp1[k]='\0';

    str=concat(temp1,temp);

}

void concat(char str[],char str1[])

{

    int i=0;

    int x=strlen(str);

    while(str1[i]!=NULL){

        str[x]=str1[i];

        x++;i++;

    }

     printf("moving all uppercase characters to the end : %s",str);

}
