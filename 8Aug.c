/* Function is a block of code where the main bussiness logic
 or action is written
 types of function
 1. user define
 2. predefined/inbuilt/library eg:printf,scanf.etc
 Advantage of function:
 code reusability
stages of function
1.declaration [return type] [function name]();
2.definition [return type] [function name](){}
3.call [function name]();

 types of functions:
 1. function without parameter and without return type.
 2. function with parameter and without return type
 3. function without parameter and with return type
 4. function with parameter and with return type

 */
//1. function without parameter and without return type.
#include<stdio.h>

 void sum();

void main(){
sum();

}
void sum(){
    int a=10,b=20;
    printf("\nAdd:%d",a+b);
}