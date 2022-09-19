/*file handling : to store the data permanently in file
fstream
//write data into file
step 1: take a variable and enter data in that variable from console.
->ofstream (to write the data)
step 2: create object of ofstream
step 3: open the txt file.(it will automatically)
step 4: write data into file
step 5: close file.

*/
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string data;
    // cout<<"enet data:";
    // getline(cin,data);
    // cout<<data;
    ofstream myfile;
    //create and open the file.
    myfile.open("krishha.txt",ios::app);
    //write data into file
    myfile<<endl<<"this is for test\nthis is for test\nthis is for test\nthis is for test"<<endl;
    cout<<endl<<"data written successfully";
    myfile.close();

    cout<<"data raeding started:"<<endl;
    string data1;
    //object to read from file
    ifstream readData;
    //open the file.
    readData.open("krishha.txt");
    //read data from file

   while (getline(readData,data1))
   {
    cout<<"data:"<<data1<<endl;
   }
    
    
    cout<<endl<<"data read successful";
    readData.close();


}