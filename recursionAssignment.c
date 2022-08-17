//summation of 1 to 5 using recursion.
#include<stdio.h>
int naturalnos(int n){
    if(n!=1)
    return (n+naturalnos(n-1));
      /*naturalnos(3)=3+3=6
      =naturalnos(2)=2+1=3 
      =naturalnos(1)=1
      */
    else{
    return
    1;
    
    }
}
void main(){
    int n=5;
    
    printf("%d",naturalnos(n));
}