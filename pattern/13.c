#include<stdio.h>
int main(){
   int m;
   scanf("%d",&m);
   int count=1;
   for(int i=1;i<=m;i++){
    for(int j=1;j<=i;j++){
        printf("%d",count);
        count++;
    }
    printf("\n");
   }
return 0;}
