#include<stdio.h>
#include<stdlib.h>

struct Node
{
int data;
struct Node*next;
};

void printlist(struct Node*n)
{
    while(n!=NULL){
        printf("%d \t",n->data);
        n=n->next;
    }
}
int main()
{
    struct Node*head=NULL;
    struct Node*second=NULL;
      struct Node*third=NULL;

 head=(struct Node*)malloc(sizeof(struct Node));
 second=(struct Node*)malloc(sizeof(struct Node));
 third=(struct Node*)malloc(sizeof(struct Node));

 head->data=98;
 head->next=second;
 second->data=87;
 second->next=third;
 third->data=90;
 third->next=NULL;
 printf("the link list has there following elemnts \n");
 printlist(head);
 }