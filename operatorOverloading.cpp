/*3.operator overloading 
+,-,/
except:
::, *,.,ternery operator,sizeof

*/


#include<iostream>
using namespace std;
class A{
    int a,b;
public:
A(){

}
A(int x,int y){
    a=x;
    b=y;
}
void print(){
    cout<<endl<<a<<"+"<<b;
}
A operator+(A p){
    A temp;
    temp.a=a+b;
    cout<<a<<"+"<<b<<endl; //1+2
    temp.b=p.a+p.b;
    cout<<p.a<<"+"<<p.b<<endl;//3+4

    return temp;
}
};
int main(){
    A a(1,2);
    A b(3,4);
    A c=a+b; // c=a.add(b)
    c.print();
}