/*
dma:
 heap
 malloc:memory allocation (1 parameter)

*/

//take the value from  user and print it.
#include<stdio.h>
#include<stdlib.h>
void main(){
int *ptr,no,sum=0;

printf("enter the no of value:");
scanf("%d",&no);

ptr=(int*)malloc(no*sizeof(int));//3*4=12

for (int i = 0; i < no; i++)
{
   printf("\nenter val:");
   scanf("%d",ptr+i);
}


for (int i = 0; i < no; i++)
{
    sum=sum+*(ptr+i);

   
}
printf("\nsum:%d",sum);

}