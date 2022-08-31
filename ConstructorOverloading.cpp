/*constructor overloading:same name different parameter.*/
#include<iostream>
using namespace std;
class ConstructorOverloading
{
private:
    int l,b,h;
public:
    void volume();
    ConstructorOverloading();
    ConstructorOverloading(int length,int breadth,int height);
    ~ConstructorOverloading();
};

ConstructorOverloading::ConstructorOverloading(/* args */)
{
    cout<<"in default constructor"<<endl;
    cout<<"\nenter length:";
    cin>>l;
     cout<<"\nenter breadth:";
    cin>>b;
     cout<<"\nenter height:";
    cin>>h;
    
}

ConstructorOverloading::ConstructorOverloading(int length,int breadth,int height){
     cout<<"in parameterized constructor"<<endl;
     l=length;
     b=breadth;
     h=height;
}
void ConstructorOverloading:: volume(){
    cout<<"volume of box:"<<l*b*h<<endl;
}

ConstructorOverloading::~ConstructorOverloading()
{
}

int main(){
ConstructorOverloading dc;
dc.volume();
ConstructorOverloading pc(4,5,6);
pc.volume();
}