#include<stdio.h>
#include<stdlib.h>

struct Node
{
int data;
struct Node*next;
};
  struct Node*head,*newnode;

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


 head=(struct Node*)malloc(sizeof(struct Node));
 second=(struct Node*)malloc(sizeof(struct Node));
 third=(struct Node*)malloc(sizeof(struct Node));
newnode=(struct Node*)malloc(sizeof(struct Node));

 head->data=98;
 head->next=second;
 second->data=99;
 second->next=third;
 third->data=100;
 third->next=NULL;
 printf("linked list before insertion at beginning:\n");
 printlist(head);
 printf("\n");

 printf("Enter the  number to be inserted :\n");
 scanf("%d",&newnode->data);
 newnode->next=head;
 head=newnode;
 printf("Linklist is as follow after insertion after beginning:\n");
 printlist(head);
 }