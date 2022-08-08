/*string group of character (character of array)
characteristic
1. it always ends with the null pointer
2. it works with the ascii value.
3. it is stored in buffer
input types:
1.scanf("%s",&str);
2.gets()
3.fgets(str,sizeof str,stdin)
"hello world"
char str[]="hello" 

char 1 byte
a=97

string function library.
string.h
1.strlen(strname)it gives length of the string
2.strcat(str1,str2) it concatenates two string 
3.strcpy(destination,source) it copies source to destination.
4.strcmp(str1,str2) it compares two strings
str1=cat
str2=cap
0 = both  string are same
-1= second str is greater
1= first str is greater
5.strrev(str)
6.strlwr
7.strupr

*/
#include <stdio.h>
#include<string.h>
void main()
{
    char str1[]="CAT",str2[]="cat";
    int i=0,count=0;
    //fgets(str, sizeof str, stdin);
    //puts(str);
    //printf("string len:%d",strlen(str));
    // while (str[i]!='\0')
    // {
    //     count++;
    //    i++;
    // }
    // printf("len:%d",count);
//     printf("concate:%s\n",strcat(str1,str2));
//    printf("copy:%s\n",strcpy(str1,str2));
  // printf("%d",strcmp(str1,str2));
  //printf("%s",strrev(str2));//54321
//printf("%s",strlwr(str1));
printf("%s",strupr(str2));
    
}


