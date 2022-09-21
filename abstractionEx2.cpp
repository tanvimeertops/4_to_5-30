/*wap in c++ to calculate the electricity bill of residential bill and comercial bill*/
#include<iostream>
using namespace std;
class A{
protected:
int unit;
public:
 void get_unit(){
    cin>>unit;
 }
 virtual void get_bill()=0;
};
class residentialBill:public A{
public:
void get_bill(){
    cout<<"bill amount:"<<unit*4<<endl;
}
};
class comercialBill:public A{
public:
void get_bill(){
    cout<<"bill amount:"<<unit*6<<endl;
}
};
int main(){
residentialBill rs;
cout<<"Enter unit for resident:";
rs.get_unit();
comercialBill cb;
cout<<"Enter unit for commercial:";
cb.get_unit();
rs.get_bill();
cb.get_bill();
}
