#include <stdio.h>

#include<stdlib.h>

int compute_length(char str[]);

void string_reverse(char str[],int);

void string_upper(char str[]);

void string_lower(char str[]);

void string_compare(char str[],char str1[],int,int);

void string_concat(char str[],char str1[],int,int);

void string_substring(char str[]);

void string_copy(char str[],int);

int main()

{

    char str[20];

    char str1[20];

    scanf("%s",str);

    scanf("%s",str1);

    int x=compute_length(str);

    int y=compute_length(str1);

    printf("size of the string is : %d\n",x);

        string_upper(str);

        string_lower(str);

        string_compare(str,str1,y,x);

         string_reverse(str,x-1);

        string_concat(str,str1,y,x);

        string_copy(str,x);

          string_substring(str);

    return 0;

}

int compute_length(char str[])

{

   int i=0,count=0;

   while(str[i]!=NULL){

    count++;i++;

   }

    return count;

}

void string_reverse(char str[],int x)

{

    int i=0;

    char temp=' ';

    while(i<x){

        temp=str[i];

        str[i]=str[x];

        str[x]=temp;

        i++;

        x--;

    }

    printf("reversed string is : %s\n",str);

}

void string_upper(char str[])

{

    int i=0;

    while(str[i]!=NULL){

        if(str[i]>=97&&str[i]<=122)

        str[i]-=32;

        i++;

    }

    printf("upper case string is : %s\n",str);

}

void string_lower(char str[])

{

    int i=0;

    while(str[i]!=NULL){

        if(str[i]>=65&&str[i]<=90)

        str[i]+=32;

        i++;

    }

    printf("lower case string is : %s\n",str);

}

void string_compare(char str[],char str1[],int y,int x){

    if(y==x){

    printf("two string are equal in size");

    printf("\n");}

    else if(x>y){

    printf("%s is bigger than %s",str,str1);

    printf("\n");}

    else

    printf("%s is smaller than %s\n",str,str1);

}

void string_concat(char str[],char str1[],int y,int x)

{

    int i=0;

    while(str1[i]!=NULL){

        str[x]=str1[i];

        x++;

        i++;

    }

    str[x]='\0';

    printf("concatenated string is : %s\n",str);

}

void string_copy(char str[],int x)

{

    char str2[20];

    int i=0;

    while(str[i]!=NULL)

    {

        str2[i]=str[i];

        i++;

    }

    str2[i]='\0';

    printf("copying the string in another string :%s\n",str2);

}

void string_substring(char str[])

{

    char str3[20];

    char str4[20];

    scanf("%s",str3);

    int i=0;

    int x,flag;

    while(str[i]!=NULL)

    {

        if(str3[0]==str[i]){

            flag=1;

            x=i;

            break;

        }

        i++;

    }

    int j=0;

    if(flag==1){

    while(str[x]!=NULL)

    {

        str4[j]=str[x];

        x++;j++;

    }

    str4[j]='\0';

    printf("%s is a substring of %s\n ",str4,str);}

    else

     printf("%s is not a substring of %s\n",str4,str);

}
