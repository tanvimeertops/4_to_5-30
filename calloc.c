/*
dma:
 heap
 malloc:memory allocation (1 parameter)
calloc: contiguos allocation(2 parameter)
*/

//take the value from  user and print it.
#include<stdio.h>
#include<stdlib.h>
void main(){
int *ptr,no,sum=0;

printf("enter the no of value:");
scanf("%d",&no);

// ptr=(int*)malloc(no*sizeof(int));//3*4=12
ptr=(int*)calloc(no,sizeof(int));//3*4=12
// for (int i = 0; i < no; i++)
// {
//    printf("\nenter val:");
//    scanf("%d",ptr+i);
// }

for (int i = 0; i < no; i++)
{
   printf("\nentered val:%d",*(ptr+i));
  
}
free(ptr);
printf("\nenter the no of value:");
scanf("%d",&no);

ptr=(int*)malloc(no*sizeof(int));//3*4=12
// ptr=(int*)calloc(no,sizeof(int));//3*4=12
// for (int i = 0; i < no; i++)
// {
//    printf("\nenter val:");
//    scanf("%d",ptr+i);
// }

for (int i = 0; i < no; i++)
{
   printf("\nentered val:%d",*(ptr+i));
  
}


}