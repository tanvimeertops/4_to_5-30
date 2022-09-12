/*We want to calculate the total marks of each student of a class 
in Physics,Chemistry and Mathematics and the average marks of the class.
 1.The number of students in the class are entered by the user.
  Create a class named Marks with data members for roll number, name and marks. 
  Create three other classes inheriting the Marks class, 
  namely
   Physics, 
   Chemistry and 
   Mathematics, 
   which are used to define marks in individual subject of each student.
    Roll number of each student will be generated automatically.*/

   #include<iostream>
   using namespace std;
   class Marks{
    protected:
    int roll_number,num;
    string name;
    int marks[5];
    public:
    void getNumOfStu(){
        cout<<"enter number of student:";
        cin>>num;
    }
    void setMarks(){
        for (int i = 0; i <num; i++)
        {
           cout<<"enter marks";
           cin>>marks[i];
        }
        
    }
    void getMarks(){
        for (int i = 0; i < num; i++)
        {
            cout<<"marks of student "<<i<<":"<<marks[i]<<endl;
        }
        
    }
    void genRoll_no(){
        for (int i = 0; i < num; i++)
        {
          cout<<"roll no:"<<rand()<<endl;
        }
        
    }
   };
   int main(){
    Marks m;
     m.getNumOfStu();
    // m.setMarks();
    // m.getMarks();
    m.genRoll_no();
   }