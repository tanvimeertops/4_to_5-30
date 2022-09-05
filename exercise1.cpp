#include<iostream>
#include<ctime>

using namespace std;
class Student{
    private:
    string name;
    public:
    Student(){
        cout<<"Student name:unknown"<<endl;
    }
    Student(string name){
        name=name;
        cout<<"Student name:"<<name<<endl;
    }
};
int main(){
Student s;
Student s1("krisha");
}