/*
What is array?
The collection of similer data types 
Items are stored at contiguous memory location 
1-d array is like a list 
2-d arrat is like a table
the c language place no limits on the number of dimensions in an array 

Why do we need arrays?

code that use array is sometimes more organized and readable

advantage of array 

It is used to represent multiple data items of same type by using only single name 

disadvantage of array
Poor time complexity of insertion and delection operation 
wastage of memory since arry are fixed in size 
it is not possible to increase the size of the array, once you have declared the array
if there is enough space present in the memory but not  in contiguous form , you will not able initialize your array

*/

#include<stdio.h>
int main(){
    int array[4];
    array[0]=23;
    printf("marks of student 1 is %d \n",array[0]);
    array[0]=323;
    printf("marks of student 1 is %d\n",array[0]);

// now we using loop for create array
// this is 1-d array  
for(int i=0;i<4;i++){
    printf("Enter the value of %d element of the array\n",i);
    scanf("%d",&array[i]);
}

    for(int i=0;i<4;i++){
    printf("The value of %d element of the array is %d\n",i,array[i]);
}

// 2-d array

int matrix[][4]={{1,2,3,4},{5,6,7,8}};
for(int i=0;i<2;i++){
    for(int j=0;j<4;j++){
        // printf("the value of %d %d element of the matrix is %d  \n",i,j,matrix[i][j]);
        printf("%d",matrix[i][j]);
    }
printf("\n");
}
    return 0;
}