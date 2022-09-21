/*abstraction : it is a process where only essential information
is given and details are hidden
1.abstract class must have one pure virtual function
2.pure virtual func will be made from =0 operator after func name.
3.no definiton should be there in parent class.
4.pure virtual func will made in parent class only.
5.func def will be in child.
6. if we dont define virtual func in child class it will also become abstrct class.
7. **we cannot make object of abstract class.**
*/
#include<iostream>
#include<cmath>
using namespace std;
class A{
    public:
      virtual void show()=0;
};
class B:public A{
public:
void show(){
    cout<<"in virtual func";
}
};
int main(){

B b;
b.show();
}