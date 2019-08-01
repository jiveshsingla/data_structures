#include <stdio.h>

#include<stdlib.h>

void insert_string(char str1[],char str2[]);

int main(){

    char str1[50];

    char str2[50];

    scanf("%[^\n]s",str1);

    scanf("%s",str2);

    insert_string(str1,str2);

    return 0;

}

void insert_string(char str1[],char str2[]){

    int x1=strlen(str1);

    int x2=strlen(str2);

    char str3[50];

    int n,i,j=0;

    scanf("%d",&n);

    for(i=n;i<x1;i++){

        str3[j]=str1[i];

        j++;

    }

    str1[n]='\0';str3[j]='\0';

    string_concat(str1,str2);

    string_concat(str1,str3);

    printf("after inserting %s,string becomes %s",str2,str1);

}

void string_concat(char str[],char str1[]){

    int i=0;

    int x=strlen(str);

    while(str1[i]!=NULL){

        str[x]=str1[i];

        x++;

        i++;

    }

    str[x]='\0';

}
