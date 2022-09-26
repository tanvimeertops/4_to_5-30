/*structure is a user defined data type in which different type of data is
grouped together.
roll_no
name
reg_no
branch 
*/
//enter 3 student info using structure of array.
#include<stdio.h>
#include<stdlib.h>
struct Student
{
    int roll_no;
    char name[500];
    
};

void main(){
struct Student *s;
int n;
printf("enter no of student:");
scanf("%d",&n);

s=(struct Student*)malloc(n*sizeof(struct Student));

for (int i = 0; i < n; i++)
{
  printf("\nenter name:");
  scanf(" ");//buffer cleaning
    gets((s+i)->name);
    printf("\nenter roll no:");
    scanf("%d",&(s+i)->roll_no);
    
}
printf("\n-----Details of student----");
for (int i = 0; i < n; i++)
{
  
  printf("\nroll no:%d",(s+i)->roll_no);
  printf("\nname:%s",(s+i)->name);
}

    free(s);
    
}