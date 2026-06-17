#include<stdio.h>
#include<stdlib.h>
int main(){
int m,s;
scanf("%d",&m);
for(int i=1;i<=2*m-1;i++){
       s=abs(m-i);
for(int j=1;j<=s;j++){
printf(" ");}
for(int k=1;k<=(2*m-1)-2*s;k++){
printf("*");
}
printf("\n");}
return 0;}
