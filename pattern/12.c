#include<stdio.h>
int main(){
   int m;
   scanf("%d",&m);
   for(int i=1;i<=m;i++){
    for(int j=1;j<=i;j++){
        printf("%d",j);
    }
    for(int k=1;k<=2*(m-i);k++){
        printf(" ");
    }
    for(int l=i;l>=1;l--){
        printf("%d",l);
    }
    printf("\n");
   }
return 0;}
