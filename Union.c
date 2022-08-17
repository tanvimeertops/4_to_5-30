/*structure is a user defined data type in which different type of data is
grouped together.
data is stored in different memory location

/*
union is a user defined data type in which all the data shares same 
memory location
*/
/*roll_no
name
reg_no
branch 
*/
//enter 3 student info using structure of array.
#include<stdio.h>
#define n 3
union Student
{
    int roll_no;
    char name[100];
    int reg_no;
      char  branch[100];
}s;

void main(){

    printf("enter roll no:");
    scanf("%d",&s.roll_no);
    printf("\nenter name:");
    scanf("%s",&s.name);
printf("\n-----Details of student----");

  
  printf("\naddress of roll no:%d",&s.roll_no);
  printf("\naddress od name:%d",&s.name);
   
    
}