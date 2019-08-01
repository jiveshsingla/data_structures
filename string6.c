#include <stdio.h>

#include<stdlib.h>

void remove_duplicates(char str[]);

int main()

{

    char str[20];

    scanf("%s",str);

    remove_duplicates(str);

    return 0;

}

void remove_duplicates(char str[])

{

    int i=0,j;

    int x=strlen(str)-1;

    char str2[x+1];

    char str1[x];

    strcpy(str2,str);

    while(str[i]!=NULL){

        for(j=i+1;j<=x;j++){

            if(str[i]==str[j])

            str[j]=' ';

        }

        i++;

    }

    j=0;i=0;

    while(str[i]!=NULL){

        if(str[i]!=' '){

        str1[j]=str[i];

        j++;}

        i++;

    }

    str1[j]='\0';

    printf("%s after removing duplicates is :%s ",str2,str1);

}
