#include<stdio.h>
#include<stdlib.h>
struct Node
{
        int data;
        struct Node* next;
};
struct Node *copyList(struct Node *org)
{
  struct Node* head=NULL;
  struct Node* head2=NULL;
  struct Node* temp=NULL;
  temp=org;
  int count=0;
  struct Node* next=NULL;
  struct Node* prev=NULL;
  while(temp!=NULL)
  {
    next=temp->next;
    temp->next=prev;
    prev=temp;
    temp=next;
    count++;
  }
  head=prev;
  for(int i=count;i>0;i--)
  {
    struct Node* head1=NULL;
    head1=(struct Node*)malloc(sizeof(struct Node));
    head1->data=head->data;
    head=head->next;
    head1->next=head2;
    head2=head1;
  }
  while(head2!=NULL)
  {
      printf("%d",head2->data);
      head2=head2->next;
  }
}
int main()
{
    struct Node* head=NULL;
        int n;
        scanf("%d",&n);
    int i;
        for(i=n;i>0;i--)
        {
                struct Node* temp=NULL;
                temp=(struct Node*)malloc(sizeof(struct Node));
                temp->data=i;
                temp->next=head;
                head=temp;
        }
        copyList(head);
}