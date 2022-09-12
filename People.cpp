/*Create a class person having members name and age.
Derive a class student having member percentage.
Derive another class teacher having member salary. 
Write necessary member function to initialize, read and write data. 
Write also Main function*/
#include<iostream>
using namespace std;
class Person{
char *name;
int age;
public:
void setPerson(){
    cout<<"Enter name:";
    cin.getline(name,200);
    cout<<"Enter age:";
    cin>>age;
}
void getPerson(){
    cout<<"name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
}
};
class Student:public Person{
float percentage;
public:
void setStudent(){
    cout<<"Enter percentage:";
    cin>>percentage;
}
void getStudent(){
cout<<"Percentage:"<<percentage<<endl;
}
};
class Teacher:public Person {
int salary;
public:
void setTeacher(){
    cout<<"enter salary:";
    cin>>salary;
}
void getTeacher(){
cout<<"salary:"<<salary<<endl;
}
};
int main(){




Student s;
Teacher t;
s.setPerson();
s.setStudent();
t.setPerson();
t.setTeacher();
s.getPerson();
s.getStudent();
t.getPerson();
t.getTeacher();
}