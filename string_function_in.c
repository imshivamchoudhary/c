#include <stdio.h>
#include<string.h>
int main()
{
     // C library:<string.h>
     // Functions
     // 1. strcat():This function is used to concatenate or combine two given strings.
     char s1[]="shivam";
     char s2[]="sumit";
     char s3[10];
     // puts(strcat(s1,s2));
     // 2. strlen(): This function is used to show length of a string.
     // printf("The length of s1 is %d\n",strlen(s1));
     // printf("The length of s2 is %d\n",strlen(s2));
     // 3.strrev():This function is used to show reverse of a string.
     // printf("The reversed string s1 is ");
     // puts(strrev(s1));
     // printf("The reversed string s2 is %s\n",strrev(s2));
     // // 4.strcpy():This function is used to copy one string to another.           strcpy(s2,s1) -- copies s1 to s2 
     // strcpy(s3,strcat(s1,s2));
     // puts(s3);
     
     // 5.strcmp():This function is used to compare two given strings.
     printf("The strcmp for s1,s2 returned %d",strcmp(s1,s2));

      return 0;
}