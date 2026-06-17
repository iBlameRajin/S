#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int size=2*n-1;
int min,top,bottom,right,left;
for(int i=0;i<size;i++){
for(int j=0;j<size;j++){
top=i;
bottom=size-i-1;
left=j;
right=size-j-1;
min=right;
if(min>left) min=left;
if(min>top) min=top;
if(min>bottom) min=bottom;
if(min==0)
printf("*");
else
printf(" ");
}
printf("\n");
}
return 0;}
