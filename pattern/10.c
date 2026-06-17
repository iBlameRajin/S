#include<stdio.h>
int main(){
int m;
int stars;
scanf("%d",&m);
for(int i=1;i<=2*m-1;i++){
stars=(i<=m)?i:2*m-i;
for(int j=1;j<=stars;j++){
printf("*");}
printf("\n");
}
return 0;}
