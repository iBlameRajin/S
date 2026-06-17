#include<stdio.h>
int main(){
   int m;
   scanf("%d",&m);
   for(int i=1;i<=m;i++){
    for(int j=1;j<=m+1-i;j++){
        printf(" ");
}
for(int k=1;k<=i;k++){
    printf("%d",k);
}
for(int l=i-1;l>=1;l--){
    printf("%d",l);
}
    printf("\n");
   }
return 0;}
