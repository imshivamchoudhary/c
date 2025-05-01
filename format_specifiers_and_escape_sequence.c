#include <stdio.h>
#define pi 3.14
int main(){
    //Format specifier
    //format specifier is a way to tell a compiler what type of data is in a variable during takeing input displaying output to the user
  int a=23;
 float b=13.333;
  printf("the value of a is %d and the value of b is %.2f\n",a,b);
    // consttants in c
    // there are two type of const in c
// const keyword
    // define preprocessor
   const float c=13.00;
    // c=12.2; can not do this since c is const
    // pi=3;can not do this since pi is const
    printf("the value of pi is %f\n",pi);
    printf("%f",c);

    // escape sequence in c
 // An escape sequence in c programming language is a sequence of characters
// It doesn't represent itself when used inside string literal or character
    // \n for new line

    printf(" tab character \t the value of pi\a is %f\n",pi);













    return 0;}