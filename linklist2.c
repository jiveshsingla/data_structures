#include<stdio.h>
#include<stdlib.h>
int count=0;
struct Node{
	int data;
	struct Node* next;
};
struct Node* insert_beg(struct Node* head){
	struct Node* new_node=NULL;
	new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=4;
	new_node->next=head;	
	head=new_node;
	return head;
}
void insert_end(struct Node* node3){
	struct Node* new_node;
	new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=5;
	new_node->next=NULL;
	node3->next=new_node;
}
void insert_btw(struct Node* node1,struct Node* node2 ){
	struct Node* new_node=NULL;
	new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=6;
	new_node->next=node2;
	node1->next=new_node;
}
struct Node* delete_start(struct Node* head){
	head=head->next;
	return head;
}
void delete_end(struct Node* end){
	end->next=NULL;

}
void delete_btw(struct Node* n1,struct Node* n2){
	n1->next=n2->next;
}
void print(struct Node* head){
	while(head!=NULL){
		printf("%d",head->data);
		count++;
		head=head->next;
	}
	
}
int main(void){
	struct Node* head=NULL;
	struct Node* node1=NULL;
	struct Node* node2=NULL;
	struct Node* node3=NULL;
	node1=(struct Node*)malloc(sizeof(struct Node));
	node2=(struct Node*)malloc(sizeof(struct Node));
	node3=(struct Node*)malloc(sizeof(struct Node));
	node1->data=1;
	node1->next=node2;
	node2->data=2;
	node2->next=node3;
	node3->data=3;
	node3->next=NULL;
	head=node1;
	head=insert_beg(head);
	insert_end(node3);
	insert_btw(node1,node2);
	head=delete_start(head);
	delete_end(node3);
	delete_btw(node1,node2);
	print(head);
	printf("%d",count);
	return 0;
}
