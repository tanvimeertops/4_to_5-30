/*multi level inheritance
*/
#include<iostream>
#include<ctime>
using namespace std;
class A{
protected:
int a,b;
public:
void setValue(int x,int y){
    a=x;
    b=y;
}
};
class B:public A{
public:
int sum(){
    return a+b;
}
};
class C:public B{
public:
void sub(){
    cout<<"sub:"<<a-b<<endl;
}
void getTime(){
    time_t now =time(0);
    //convert time to string
    string date= 

}
};
int main(){
    C c;
    B b;
   b.setValue(10,20);
    cout<<"sum:"<<b.sum()<<endl;
     c.setValue(10,2);
    c.sub();
}