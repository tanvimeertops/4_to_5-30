//3. function without parameter and with return type
#include <stdio.h>

int sum();
void main()
{
    printf("\nAdd:%d", sum());
}
int sum()
{
    int a = 20, b = 10;
    return (a + b);
}