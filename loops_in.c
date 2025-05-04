// Type of loops
/*1. do while loop;
2. while loop 
3. for loop*/

#include <stdio.h>
int main(){
	int num,i, index=0;
	printf("enter a number\n");
	scanf("%d",&num);
// do while loop executes atleast ones
	do{
		printf("%d\n",index);
		index=index+1;
	} while(index<num);


// while loop
i=0;
	while (i<10){
		printf("%d\n",i);
		i=i+1;
	}

	
 /*for loop
	syntax for for loop
	for(expression1;expression2;expression2)
	
	expression1 represents the initialization of the loop variable
	we can initialize more than one variable in expression1 
	expression1 is optional

	
	expression2
	it is a conditional expression
	it can have more than one condition.however the loop will iterate unitl the last condition become fasle
	it is optional

	expression3
	expression3 is used to update the loop variable 
	it is a optional
	{
	code to be run
	}*/
int j;
for (j=0;j<4;j++){
	printf("%d\n",j);
	
}
return 0;
}