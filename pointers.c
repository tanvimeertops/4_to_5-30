/*pointer points to the address of variable.*/

//WAP to find reverse of string using recursion
/*hello  olleh*/
#include<stdio.h>
void print_hello(char *ptr){
if(*ptr)
print_hello(ptr+1);
printf("\n%p",ptr);
printf("%c",*ptr);

}
void main(){
    char ch[]="hello";
    print_hello(ch);
}