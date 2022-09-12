/* heirarchical single parent and multiple child

*/

#include<iostream>
#include<cmath>
using namespace std;
class A{
protected:
int a,b;//instance variable
public:
void setData(int x,int y){
    a=x;
    b=y;
}
void getData(){
    cout<<a<<"\t"<<b<<endl;
}
};
class B:public A{
    public:
void multiplation(){
    cout<<"multipliaction:"<<a*b<<endl;
}
};
class C:public A{
public:
void cube(){
    cout<<"cube of value 1:"<<pow(a,3)<<endl;
    cout<<"cube of value 2:"<<pow(b,3)<<endl;
}
};
int main(){
    B b;
    C c;
    b.setData(10,2);
    c.setData(2,3);
    b.getData();// 10  2
    b.multiplation();//20
    c.getData();//2  3
    c.cube();// 8  27

}