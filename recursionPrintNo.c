#include<stdio.h>
void print1To50(int n){
    if(n){
            print1To50(n-1); 
            // print1To50(9)
            // print1To50(8)
            // print1To50(7)
            // print1To50(6)
            // print1To50(5)
            // print1To50(4)
            // print1To50(3)
            // print1To50(2)
            // print1To50(1)
            // print1To50(0)0

    }else{
            return;
            printf("\n%d",n);
    }
}
void main(){
    int n=10;
       // printf("%d",print1To50(n));
       print1To50(n);
}