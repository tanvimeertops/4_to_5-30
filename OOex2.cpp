/*Write a program to concatenate the two strings using Operator Overloading*/
#include<iostream>
#include <string.h>
using namespace std;
class str{

    char  str_val[100];
    public:
void accept_val(){
    cout<<"enter a word:";
    gets(str_val);
}
void dusplay(){
    cout<<str_val<<"\t";
}

void operator+(str strr){
strcat(str_val,strr.str_val);
cout<<endl<<str_val;
}
};
int main(){
str s1;
str s2;
s1.accept_val();
s2.accept_val();
s1.dusplay();
s2.dusplay();

s1+s2;
}
