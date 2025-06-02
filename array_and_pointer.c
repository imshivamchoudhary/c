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


    return 0;
}