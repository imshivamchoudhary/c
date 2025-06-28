#include<stdio.h>
void swap(int *a,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x,y;
    // Actual and Formal Parameters
    // When a function is called ,the values (expressions) that are passed in the call are called the arguments or actual parameters

    // Formal parameters are loca; variable which are assigned value from the arguments when the function is called 

    // Types of Function call in c programming
    // WE can call a function in two different ways:
    // 1 Call by  value: When we call a function by value ,it means that we are passing the values of the arguments which are copied into the 
    // formal parameters of the function 
    // Which means that the original values remian unchanged and only the parameters inside the function changes 
    // 2 Call by reference: The call by reference method of passing arguments to a c function copies the address of the arguments into the formal parameters
    // Address of the actual arguments are copied and then assigned to the corresponding formal arguments
    x=23,y=32;
    printf("%d and %d\n",x,y);
    swap(&x,&y); //using call by reference
    printf("%d and %d\n",x,y); 
    printf("hello world");
}