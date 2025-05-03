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

	
//  for loop
int j;
for (j=0;j<4;j++){
	printf("%d\n",j);
	
}
return 0;
}