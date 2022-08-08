//function with parameter and with return type
#include <stdio.h>

int sum(int a,int b);
void main()
{
    printf("\nAdd:%d", sum(10,20));
}
int sum(int a,int b)
{
    return (a + b);
}