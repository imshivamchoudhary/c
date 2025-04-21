//operators
//types of operator
//1 arithmetic
// +,-,/,*,
// % ----> modulus

#include <stdio.h>
int main(){
  int a,b;
  a=2;
  b=4;
  printf(" a+b %d \n",(a+b));
  printf("a+b %d \n",(a-b));
  printf("a+b %d \n",(a*b));
  printf("a+b %d \n",(a/b));
  printf("a+b %d \n\n",(a%b));


  // Relational operation
  // ==,!=,>,<,>=,<=
  printf(" a+b %d \n",(a==b));
  printf("a+b %d \n",(a!=b));
  printf("a+b %d \n",(a>b));
  printf("a+b %d \n",(a<=b));
  printf("a+b %d \n",(a%b));



  // logical operators
// &&,||,!
  printf(" a==b %d \n",(a==b));
  printf("a||b %d \n",(a!=b));
  printf("a!b %d \n",(a>b));

  // bitwise operator
// 1&2
int c=2;
  int d=3;
  printf("c&d %d \n",c&d);

  // assignment operator
  //  = ---> simple assignment operator
  // += --->add and assign operator
  // -= --->subtract and assign operator
  // *= --> multiply and assign operator
  // /= --> divide and assign operator
  d+=2;
  // d-=1;
  c*=2;
  // d/=2;
  printf("d is = %d \n",d);
  printf("c is = %d \n",c);
  // printf("d is = %d \n",d);
  // printf("d is = %d \n",d);

// miscellaneous operators
  // sizeof(),&--> address operator,*-->pointer

  printf("the size of c is %d \n",sizeof(c));


}

