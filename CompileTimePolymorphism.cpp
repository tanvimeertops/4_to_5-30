/*polymorphism: one name multiple form
-->aquirring more than one form
types of polymorphism:
1.run time (function over riding)
2.compile time

compile time polymorphism
1.function overloading
2.constructor overloading
3.operator overloading
*/

/* Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading*/


#include<iostream>
using namespace std;
class A{
public:
void calc(int a,int b,int c,int d){
    cout<<"Addition:"<<a+b+c+d<<endl;
}

void calc(double a,double b){
    cout<<"Subtraction:"<<a-b<<endl;
}

void calc(int a,int b,int c){
    cout<<"Multiplication:"<<a*b*c<<endl;
}

void calc(long a,int b){
    cout<<"Division:"<<a/b<<endl;
}
};
int main(){
A aa;
aa.calc(1,1,1,1);
aa.calc(452.2,125.1);
aa.calc(2,3,2);
aa.calc(12566986,10);

}
