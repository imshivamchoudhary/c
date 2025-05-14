#include <stdio.h>
   int sum(int a,int b){
        return a+b;
     }
void printstar(int n){
    for(int i=0;i<n;i++){
        printf("% c",'*');
    }
}

int takenumber(){
    int i;
    printf("enter a number ");
    scanf("%d",&i);
    return i;
}
int main(){

    // function
    /*
    Function are used to divide a large program into small pieces
    A function can be called multiple times to provide reusability and modularity to the program
    also called procedure or subroutine.


    advantages of function
    we can avoid rewriting same logic through function
    we can divide the work among programmars using function
    we can easily debug  a program using function 



    declaration,defination or call 
    A fucntion is declared to tell a compiler about its existance
    a function is define to get some task done 
    a function is called in order to be used

    types of function
    1 library
    2 user defined
    
    
    
    */

   int a=4;
   int b=23;
int c =sum(a,b);

int d=takenumber();
printf("the entered number is %d\n",d);
    printf("hello world\n");
    printf("%d\n",c);
    printstar(10);
    return 0;
}
