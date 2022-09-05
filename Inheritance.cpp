/* Inheritance:
--> creating a class from an existing class.
--> aquirring the attributes of parent class.
--> object will be created of child only.
Advantage of inheritance:
-->code reuseabilty
types of inheritance:
1.single
2.multi level
3.multiple --> multiple parent and single child. 
amguity-->when there is same name of function in both the parent class 
then the child get confused which function to call.
4.hierarchical
5.hybird(hierarchical+multiple)

*/
/*1.single*/
#include<iostream>
using namespace std;
class A{
protected:
int a,b;
public:
void set(int x,int y){
a=x;
b=y;
}
};
class B:public A{
    public:
    void sum()
    {
        cout << "sum:" << a + b;
    }
};
int main(){
B b;
b.set(10,20);
b.sum();
}