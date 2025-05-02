// switch case contral statement in c
#include <stdio.h>
int main()
{
	// rules for switch case
	/*1. switch expression ----> must be an int or char
	2. case value must be an integer or a char
	3. case must come inside switch
	4. break is not a must*/
	int age,mark;
printf("Enter your age\n");
scanf("%d",&age);
printf("Enter your marks\n");
scanf("%d",&mark);


switch (age)
{
case 1:
    printf("the age is 1\n");
    switch (mark){
    case 23:
    	printf("your marks are 23");
        break;
    default:
    	printf("your marks are not 23");
        }    break;
    

default:
    printf("you are not able");
    break;
}
	
	return 0;
}