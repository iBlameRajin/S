#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m+1-i;j++){
            printf("*");
        }
        for(int k=1;k<=2*i-2;k++){
            printf(" ");
}
        for(int l=1;l<=m+1-i;l++){
            printf("*");
        }printf("\n");
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        for(int k=1;k<=2*(m-i);k++)
            printf(" ");

 for(int l=1;l<=i;l++){
            printf("*");
        }
        printf("\n");
    }
return 0;
}
