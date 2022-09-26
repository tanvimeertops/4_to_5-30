/*friend function: to access the private and protected member of class
 without using the object.
 
 1.declaration of friend func must be inside class.
 2.definition can be outside class.
 3.calling of friend can be done without using object.

 why friend func?
 in special case when we need to use private and protected member of class
 without using the object.
 */
//sum of two nos using friend function.
#include<iostream>
using namespace std;
class A{
    private:
    int x,y;
    public:
A(int a,int b){
    x=a;
    y=b;
}

friend void sum(A obj);
};

void sum(A obj){
   cout<< "sum:"<<obj.x+obj.y<<endl;
}
int main(){
A aa(10,20);
sum(aa);

}
