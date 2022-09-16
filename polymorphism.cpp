/*constructor chaining: inheritance+constructor
polymorphism: one name multiple form
-->aquirring more than one form
types of polymorphism:
1.run time (function over riding)
2.compile time

function over riding (runtime polymorphism): when more than one function have 
same prototype(same name,parameter,return type) 

the function of derive class over rides the function of parent class.
*/
#include<iostream>
using namespace std;
class A{
public:
A(){
    cout<<"in constructor A"<<endl;
}
virtual void show(){
    cout<<"in func of A"<<endl;
}
};
class B:public A{
public:
B(){
    cout<<"in constructor B"<<endl;
}
void show(){
    cout<<"in func of B"<<endl;
}
};
class C:public B{
public:
C(){
    cout<<"in constructor C"<<endl;
}
void show(){
    cout<<"in func of C"<<endl;
}
};

int main(){
    
    B b;
    C c;
    A a1;
    A *a=&b;
     A *aa=&a1;
     A *ac=&c;
    a->show();
    aa->show();
    ac->show();

}