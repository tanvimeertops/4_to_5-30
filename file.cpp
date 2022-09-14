/*to store the data permanent we perform file handling*/
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string data;
    getline(cin,data);
    //write to a file.
    ofstream myfile;
    //class     obj(constructor)
    myfile.open("xyz.txt");
    myfile<<data;
    myfile.close();
    cout<<"written successfully"<<endl;
    //it will override the data.

    cout<<"started reading from the file:";
    string data_read;
    ifstream read_file;
    read_file.open("xyz.txt");
    //read from the file
    getline(read_file,data_read);
    cout<<"data:"<<data_read;
    cout<<endl<<"read operation completed";
    read_file.close();
    
}