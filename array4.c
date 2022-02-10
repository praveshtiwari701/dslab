#include<stdio.h>

int main(){
    int dis[2][3],i,j;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Enter the value for disp[%d][%d]:",i,j);
            scanf("%d",&dis[i][j]);
        }
}
printf("2-D Array elements :\n");
for(i=0;i<2;i++){
    for(j=0;j<3;j++){
     printf("%d \t",dis[i][j]);
     if(j==2){
         printf("\n");
     }
    }
}
return 0;
}