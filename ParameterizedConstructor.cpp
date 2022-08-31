/*Constructor: it is a special member function*/
/*characteristics of constructor*/
/*1. same name as class name.
  2. it has no return type.
  3. it invokes automatically whenever the object is created.

  types of constructor.
  1.default (no parameter)
  2.parameterized(argu)
  3.copy constructor (obj as argu) cloning of object
*/
/*1.wap in c++ for volume of box parameterized (argu) */
#include<iostream>
using namespace std;
class Construct{
private:
int l,b,h;
public:
Construct(int length,int breath,int height){
    l=length;
    b=breath;
    h=height;
    cout<<"in parameterized constructor"<<endl;
}
void volume(){
    cout<<"volume of box:"<<l*b*h<<endl;
}
};
int main(){
Construct dc(4,5,6); 
dc.volume();
}