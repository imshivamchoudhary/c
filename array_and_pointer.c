/*
Pointers arithmetic
There are four arithmetic operator that can be used in pointer 
++
--
+
-


*/


/*
arrays and pointers
however , arr,by itself without any index subscripting can be assigned to an integer pointer 
*/

#include <stdio.h>
int main()
{ 
    int a =34;
    int* ptra =&a;
    printf("the adress of a is %d\n",ptra);
    ptra++;
    printf("the adress of a is %d\n",ptra);
    printf("the adress of a is %d\n",ptra+1);

    int arr[]={1,2,3,4,4,5,5,6,76};
    printf("Value at position 3 of array is %d\n",arr[3]);
    printf("The address of first element of the array is %d \n",&arr[0]);
    printf("The address of first element of the array is %d \n",arr);
    printf("The address of second element of the array is %d \n",&arr[1]);
    printf("The address of second element of the array is %d \n",arr+1);

 printf("\n");
 
    printf("The value at address of first element of the array is %d \n",*(&arr[0]));
    printf("The value at address of first element of the array is %d \n",*(arr));
    printf("The value at address of second element of the array is %d \n",*(&arr[1]));
    printf("The value at address of second element of the array is %d \n",*(arr+1));

    return 0;
}