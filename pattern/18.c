#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        for(int j=m+1-i;j<=m;j++){
            printf("%c",j+64);
        }printf("\n");
    }
return 0;}
