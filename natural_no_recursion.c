#include<stdio.h>
void natural_no(int n){
if(n)
natural_no(n-1);
else
return;
printf("\t%d",n);
}
void main(){
    int i=50;
natural_no(i);
}