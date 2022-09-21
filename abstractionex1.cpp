/*wap to calculate area using abstrction. */
#include<iostream>
using namespace std;
class A{
protected:
 int dimension;
 public:
 void get_dim(){
    cin>>dimension;
 }
 virtual void area()=0;
};
class Square:public A{
public:
void area(){
    cout<<"area of square:"<<dimension*dimension<<endl;
}
};

class Circle:public A{
public:
void area(){
    cout<<"area of circle:"<<3.14*dimension*dimension<<endl;
}
};
int main(){
    Square sq;
    cout<<"enter dim for square:";
    sq.get_dim();
    sq.area();
    Circle c;
    cout<<"enter dim for circle:";
    c.get_dim();
    c.area();
}