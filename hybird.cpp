/*hybird inheritance*/
#include<iostream>
using namespace std;

class A{
    protected:
    int a=10,b=20;
};

class B:public A {
public :
void sum(){
    cout<<"sum:"<<a+b<<endl;
}
};
class C:public A{
    public:
void multi(){
    cout <<"multiplication:"<<a*b<<endl;
}
};
class D:public B,public C{

};
int main(){
    D d;
    d.sum();
    d.multi();
    
}