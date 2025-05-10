#include <stdio.h>
int main(){
    /* also called jump statement
    used transfer to program control to a perdefined lable
    its use is avoid since it causes confusion for the fellow programmers in understanding the code.
    goto statement is perferable when we need to break multiple loops using a single statement at the same time.
    */
//    lable:{
//     printf("we are inside the lable\n");
//    goto end; 
// }
// printf("hello world");
//    goto lable;
// end:{
//     printf("we are at end");
//    }
int num;
for (int i = 0; i <10; i++)
{
   printf("%d\n",i);
   for (int j = 0; j <10; j++)
   {
      printf("enter the number. enter 0 to exit\n");
      scanf("%d\n",&num);
      if (num==0){
         goto end;
      }
   }
   
}
end:
return 0;
}
