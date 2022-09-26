/*Write a program to find the multiplication values and the cubic values using 
inline function */
#include<iostream>
#include<cmath>
using namespace std;
inline void multiply(int a,int b,int c,int d=50){
    cout<<"multiplacation:"<<a*b*c*d<<endl;
}

inline void cube(int x){
cout<<"cube:"<<pow(x,3)<<endl;
}
int main(){
    multiply(10,20,30);
    cube(2);
}