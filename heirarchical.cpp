/*We want to calculate the total marks of each student of a class 
in Physics,Chemistry and Mathematics 
and the average marks of the class. 
The number of students in the class are entered by the user. 
Create a class named Marks with data members for 
roll number, 
name and 
marks. 
Create three other classes inheriting the Marks class, 
namely Physics, Chemistry and Mathematics, 
which are used to define marks in individual subject of each student. 
Roll number of each student will be generated automatically.
/*output
Enter the num of student: 3
roll no:1
total in physics : 52
roll no:2
total marks : 56
roll no:3
total marks : 85
*/
#include<iostream>
using namespace std;
class  Marks{
public:
int roll_no,no,sum1;
int *marks;

void genMarks(int n){
no=n;
marks=new int[n];
for (int i = 0; i < no; i++)
{
    cout<<endl<<"enter marks:";
    cin>>marks[i];
}

}

int sum(){
sum1=0;
for (int i = 0; i < no; i++)
{
    sum1=sum1+marks[i];
}
return sum1;
}

};
class Physics:public Marks{

};
class Chemistry:public Marks{

};
class Mathematics:public Marks{

};


int main(){
    int num;
    cout<<"enter no of stu:";
    cin>>num;
    Physics *p=new Physics[num];
    Chemistry *c=new Chemistry[num];
    Mathematics *m=new Mathematics[num];

for (int i = 0; i < num; i++)
{
    p[i].roll_no=c[i].roll_no=m[i].roll_no=i+1;
}

for (int i = 0; i < num; i++)
{
    cout<<"roll no:"<<p[i].roll_no<<endl;
}

for (int i = 0; i < num; i++)
{
    cout<<"physics marks"<<endl;
    p[i].genMarks(2);
    cout<<"total of physis:"<<p[i].sum();
    cout<<"chemistry marks"<<endl;
    c[i].genMarks(2);
    cout<<"maths marks"<<endl;
    m[i].genMarks(2);
}


}