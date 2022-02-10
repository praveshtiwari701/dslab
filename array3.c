#include<stdio.h>
int main(){
    int x;
    int num[5];
    for(x=0;x<=4;x++){
        printf("Enter number %d\n",(x+1));
        scanf("%d",&num[x]);
    }
    printf("The numbers you have entered are:\n");
    for(x=0;x<=4;x++){
        printf("%d\n",num[x]);
    }
    return 0;
}