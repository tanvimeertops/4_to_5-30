/*INLINE function: the compiler replace the calling function with the definition code.

*/
/*increement a num using inline funtion
before increement:5
after increement:6
*/
#include<iostream>
using namespace std;

inline void incree(int x){
cout<<"\nafter increement:"<<++x;
}
int main(){
    int a=5;
    cout<<"\nbefore increement:"<<a;
incree(a);
    
}