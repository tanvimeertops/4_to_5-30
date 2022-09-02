/*constructor overloading:same name different parameter.
Destructor destroys the object.
in c++ object are destroyed manually.
objects are stored in stack.(stack work in LIFO)
So the object which is created first are destroyed last.

*/
/*copy constructor and destructor
*/
#include<iostream>
using namespace std;
class ConstructorOverloading
{
private:
    int l,b,h,vol;
public:
    void volume();
    ConstructorOverloading();
    ConstructorOverloading(int length,int breadth,int height);
    ConstructorOverloading(ConstructorOverloading &cc);
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
ConstructorOverloading::ConstructorOverloading(ConstructorOverloading &cc){
    cout<<"in copy constructor"<<endl;
    l=cc.l;
    b=cc.b;
    h=cc.h;

}
void ConstructorOverloading:: volume(){
    vol=l*b*h;
    cout<<"volume of box:"<<vol<<endl;
}

ConstructorOverloading::~ConstructorOverloading()
{
    cout<<"destructor called for:"<<vol<<endl;
}

int main(){
ConstructorOverloading dc;
dc.volume();
ConstructorOverloading pc(4,5,6);
pc.volume();
ConstructorOverloading cc(dc);
cc.volume();
}