#include <stdio.h>
int func1(int array[])
{
     for (int i = 0; i < 4; i++)
     {
          printf("The value at %d is %d \n", i, array[i]);
     }
     printf("\n");
     // array[0]=32; //Very important point that if you change any value her, it gets reflected in main()
     return 0;
}

void func2(int* ptr){
     for(int i=0;i<4;i++){
          // printf("The value at %d is %d \n",i,ptr[i]);
          printf("The value at %d is %d \n",i,*(ptr+i));
     }
     *(ptr+2)=32;
}

void func3(int arry[2][2]){
     for(int i=0;i<2;i++){
          for(int j=0;j<2;j++){
               printf("The value at %d %d is %d \n",i,j,arry[i][j]);
          }
     }
}
int main()
{
     //     Why and how to pass arrays ?
     // We pass array to a function when we need to pass a list of values to a given function.
     // We can pass the array to a function :
     // 1 By declaring array as a parameter in the function .
     int arr[] = {1, 2, 3, 23};
     func1(arr);
     int arry[2][2]={{23,32},{43,34}};
     // 2 By declaring a pointer in the function to hold the base address of the array.
     func2(arr);
     func2(arr);
     func3(arry);
     return 0;
}