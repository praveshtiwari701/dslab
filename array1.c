#include<stdio.h>
int main(){
    int a[20],i,sum=0,n;
  float avg;

    printf("How many numbers are there :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter number %d:",i+1);
    scanf("%d",&a[i]);
   
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("Average of %d numbers:%0.2f",n,avg);
    return 0;
}