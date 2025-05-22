// What is a pointer ?
/*
Pointer is a data type which stores the address of another variable
Size depends on the architecture .Ex 2 bytes for 32 bit
Pointer in c programming language can be declared using * (asterisk symbol)

'&' and '*' operators

The address of operator '&' returns the address of a variable
* is the dereference operator ( aslo called indirection operator ) used to get the value at a given address


uses of pointer
dynamic memory allocation 
array,function and structure 
return multiple value from a function 
pointer

*/

#include <stdio.h>
int main(){
    int a=23;
    int *ptra = &a;
    printf("Lets learn about pointers\n");
    
    printf("the address of a is %x\n",&a);
    printf("the value of a is %d and the address of a is %x\n",a,ptra);
    printf("the address of pointer to a is %x\n",&ptra);
    
    // null  pointer 
    // A pointer that is not assigned any value but NULL is also known as the Null pointer 
    /*
    In computer programinng a null pointer is a pointer that does not point to any object or function
    We can use it to initlize a pointer variabke when that pointer variable isn't assigned any valid memory address yet


    int *ptr=NULL;
    */
   int *ptr2=NULL;
   
   printf("the address of some grabage is %p\n",ptr2);
   

    return 0;
}