/*multiple inheritance
multiple parent and single child
ambiguity: when the object of child is confused which function to be called
 in case both parents have same function name
*/
#include<iostream>
using namespace std;
class sem1{
public:
int physics,maths,engineer_draw;
public:
void getMarks(int p,int m,int ed){
    physics=p;
    maths=m;
    engineer_draw=ed;
}
int total_sem1(){
return physics+maths+engineer_draw;
}
};
class sem2{
public:
//int data_structure,c,english;
int str,s;
public:
void getMark(int name,int b){
    str=name;
    s=b;
    
}
void total_sem2()
{
     //cout<<"total of sem2:"<<data_structure+c;
    cout<<"name:"<<str<<"\t"<<s<<endl;
    cout<<"sum:"<<str+s<<endl;
}
};
class firstYear:public sem1,public sem2{
private:
int total;
float average;
public:

void getResult(){
    total =total_sem1();
    //average =total/3;
    
    cout<<"total of sem1:"<<total<<endl;
   
    //cout<<"average:"<<average<<endl;
}

};
int main(){
    
    firstYear fs;
    fs.getMarks(40,50,60);
    fs.getMark(10,20);
    fs.total_sem2();
    fs.getResult();
}