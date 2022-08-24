/*Add/sub of matrix is valid only if the 
size of 1st matrix is equal to the size of 2nd matrix.

*/
#define n 2
#include<stdio.h>
void main(){
int a[n][n]={{1,2},{-4,6}};
int b[n][n]={{7,8},{5,9}};
int c[n][n];
for (int i = 0; i<n; i++)
{
    for (int j = 0; j<n; j++)
    {
        c[i][j]=a[i][j]-b[i][j];
        printf("%d\t",c[i][j]);
    }
    printf("\n");
}

}