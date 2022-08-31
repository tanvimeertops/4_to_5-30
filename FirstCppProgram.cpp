/*
        c                                   c++ 
        procedure oriented programming     object oriented programming
        top to down                          bottom to top 
        big programs are divided          program are organised because of objects.
         into function

      cout is stored in iostream in std tool box.   
      :: scope resolution operator

      compiler unix if everything is okay in a program 
      then it will return 0 and in case of error it will return 1.

object oriented concepts
1.class is collection of data members and member functions.
2.object gives permission to use the functionality of a class.
3.inheritance
4.polymorphism
5.encapsulation
6.abstraction

Access Specifier it gives visibility and accessibility
1.private only visible inside the class.
2.public visible everywhere.
3.protected.
*/
/*function overloading same name but different parameter*/
#include<iostream>//iostream
using namespace std;
class FisrtCpp 
{
    private:
    int a=10,b=20;
    public:
    void sum(){
        cout<<"sum:"<<a+b<<endl;
    }
    int sum(int x,int y){
        a=x;
        b=y;
        //cout<<"sum:"<<a+b;
        return a+b;
    }
 
};
int main(){
    FisrtCpp obj;
    obj.sum();
   cout<<"sum:"<<obj.sum(1,2);
    
    
}