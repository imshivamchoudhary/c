//Question
//Print multiplication table of a number entered by the user in pretty form ?
//hint
//    Input
//    Enter the number you want to multiplication table
//    6
//    output
//    table of 6 :
//    a X 1 = 6

#include <stdio.h>
int main(){
    int num;
    printf("Enter the number you want to multiplication:\n");
    scanf("%d",&num);
    printf("table of %d:\n",num);
    printf("%d x %d = %d\n", num, 1, num * 1);
    printf("%d x %d = %d\n", num, 2, num * 2);
    printf("%d x %d = %d\n", num, 3, num * 3);
    printf("%d x %d = %d\n", num, 4, num * 4);
    printf("%d x %d = %d\n", num, 5, num * 5);
    printf("%d x %d = %d\n", num, 6, num * 6);
    printf("%d x %d = %d\n", num, 7, num * 7);
    printf("%d x %d = %d\n", num, 8, num * 8);
    printf("%d x %d = %d\n", num, 9, num * 9);
    printf("%d x %d = %d\n", num, 10, num * 10);
    printf("%d x %d =%d",num,1,num*1);

}