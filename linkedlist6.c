#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node*next;
};
  struct Node*head,*temp;

void printlist(struct Node*n)
{
    while(n!=NULL){
        printf("%d \t",n->data);
        n=n->next;
    }
}
void main()
{

    struct Node*second=NULL;
      struct Node*third=NULL;
struct Node*newnode;
struct Node*temp;
int n,i=1,count=1;

 head=(struct Node*)malloc(sizeof(struct Node));
 second=(struct Node*)malloc(sizeof(struct Node));
 third=(struct Node*)malloc(sizeof(struct Node));

 head->data=98;
 head->next=second;
 second->data=99;
 second->next=third;
 third->data=100;
 third->next=NULL;
 
 printf("linked list before deleting the last node:\n");
 printlist(head);
 printf("\n");
 temp=head;
 while(temp->next!=NULL){
     count =count+1;
     temp=temp->next;
 
 }
 temp =head;
 while(i<count-1){
     temp=temp->next;
     i++;

 }
 temp->next=NULL;
 printf("Linked list after deletion of the last node:\n");
 printlist(head);
}