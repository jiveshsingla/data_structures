#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node* next;
};
struct Node* input_node()
{
	struct Node* head=NULL;
	int d;
	scanf("%d",&d);
	int i;
	for(i=d;i>0;i--){
	struct Node* temp=NULL;
	temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=i;
	temp->next=head;
	head=temp;
	}
	return head;
}
void print(struct Node* head)
{
	while(head!=NULL)
	{
		printf("%d",head->data);
		head=head->next;
	}
}
int main(void)
{
	struct Node* head;
	head=NULL;
	head=input_node();
	print(head);
	return 0;
}
