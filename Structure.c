/*structure is a user defined data type in which different type of data is
grouped together.
roll_no
name
reg_no
branch 
*/
//enter 3 student info using structure of array.
#include<stdio.h>
#define n 3
struct Student
{
    int roll_no;
    char name[500];
    int reg_no;
      char  branch[100];
}s[n];

void main(){
for (int i = 0; i < n; i++)
{
  printf("\nenter name:");
    scanf("%s",&s[i].name);
    printf("\nenter roll no:");
    scanf("%d",&s[i].roll_no);
    
}
printf("\n-----Details of student----");
for (int i = 0; i < n; i++)
{
  
  printf("\nroll no:%d",s[i].roll_no);
  printf("\nname:%s",s[i].name);
}

    
    
}