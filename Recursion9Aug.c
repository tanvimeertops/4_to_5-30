//recursion is a process where the function calls itself.
// will be used as a alternative of looping 

//factorial of a given no (3*2*1)=6
#include<stdio.h>
int fact(int f)
{
	if (f != 0)
	{
		return (f * fact(f - 1));
		/*
			fact(3)=3*2=6
			fact(2)=2*1=2
			fact(1)=1*1=1
			fact(0)=1
		*/
	}
	else
	{
		return 1;
	}
}
void main(){
    
	
	printf("factorial:%d",fact(3));
}

