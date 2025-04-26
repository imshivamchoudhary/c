// If else statement
// It is used to perform operation based on some condition
// type of if statement
// 1. if
// 2. if else
// 3. if-else if
// 4. nested if
#include <stdio.h>
int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    printf("You have entered %d as your age\n",age);

    if (age>=18) {
        printf("You can vote");
    }
    else if (age>10) {
        printf("YOu are betwee 10 to 18 you can vote for kids");
    }
    else {
        printf("You cannot vote");
    }
}