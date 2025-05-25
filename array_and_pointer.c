/*
Pointers arithmetic
There are four arithmetic operator that can be used in pointer 
++
--
+
-


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