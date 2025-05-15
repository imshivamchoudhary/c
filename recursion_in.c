/*
Recursion is very important in c .It will help you to how to build logic

What is recursive function ?

* Recursive function or recursion is a process when a function calls a copy of itself to work on a smaller program
* Any function which call itself is called recursion function
* A termination condition is imposed on such function to stop them executing copies of them self forever.   


Why recursion ?
* Any problems that can be solved recursively , can also be solved iteratively. 

*/

#include <stdio.h>

int fact(int n){
    if(n==0 || n==1){
        return 1;

    }
    else{
        return (n*fact(n-1));
    }
}
int main(){
    int n=5;
    int c=fact(n);
    printf("%d\n",c);
    printf("hello world");
    
    return 0;

}