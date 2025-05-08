#include <stdio.h>
int main()
{
	// break statement 
// used to bring the program control out of the loop
// the break statement is used inside loop or switch case


// continue statement
// used to bring the program control to the next iteration of the loop 
// the continue statement skips some code inside the loop and continue with the next iteration
int i,age;
for (i=0;i<10;i++){
	printf("%d\nEntre you age:\n",i);
    scanf("%d",&age);
    // if (age>10) {
    //     break;
    // }
    if (age>10){
        continue;
    }
    printf("we have not come across any continue statement");
}


	return 0;
}