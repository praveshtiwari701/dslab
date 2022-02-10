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
   
     struct Node*previous;
 
    int n,i=1,count=1,j=1;

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

 printf("Enter the position of the node to delete:");
 scanf("%d",&n);

 temp=head;
 while(temp->next!=NULL){
     count =count+1;
     temp=temp->next;
 
 }
 if(n>count){
     printf("Enter position is not valid");

 }
 else{
     temp=head;
     while(i<n){
         temp=temp->next;
         i++;
     }

     previous=head;
     while(j<n-1){
         previous=previous->next;
         j++;

     }
     previous->next=temp->next;
     temp->next=NULL;

     printf("Linked list after deletion is:\n");
    printlist(head);
 }
}