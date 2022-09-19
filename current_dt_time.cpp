#include<iostream>
#include<ctime>
using namespace std;
int main(){
time_t cur_date_time;
string date;
cur_date_time= time(0);
//convert into string
date =ctime(&cur_date_time);

cout<<date;
}