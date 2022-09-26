//sum of two nos using inline function.

#include<iostream>
using namespace std;
inline int sum(){
    int a,b;
    a=10;
    b=20;
    return (a+b);
}
int main(){
   cout<<"\nsum:"<<sum();
}