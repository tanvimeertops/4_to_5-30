//2. function with parameter and without return type
#include <stdio.h>

void sum(int a, int b);

void main()
{
    int a, b;
    printf("Enter num:");
    scanf("%d %d", &a, &b);

    sum(a, b);
}
void sum(int a, int b)
{

    printf("\nAdd:%d", a + b);
}