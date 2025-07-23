#include <stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char name[30];
    int salary;

};
struct Employee e1,e2;  //This is global variable

void emp(){
printf("%s",e1.name);
} 

int main()
{
    // What is a structure ? 
    // Structure are user defined data types together.
    // Using structure allows us to combine data of different types together.
    // It is used to create a complex dtat type which contains diverse information.

    // Accessing structure members?
    // Array element are accessed using the subscript variable.
    // In a similer fashion,structure members are accessed using dot [.] operator.
    // (.) is called as "structure member operator".
    // struct Employee e1,e2;   //This is a local variable
    e1.id=1;
    strcpy(e1.name,"CodeVerseShivam");
    e1.salary=99999999;
     e2.id=2;
    strcpy(e2.name,"Sumit");
    e2.salary=999999999;
    // printf("Employee Id  %d is %s and his salary is $%d\n",e1.id,e1.name,e1.salary);
    // printf("Employee Id  %d is %s and his salary is $%d\n",e2.id,e2.name,e2.salary);
    emp(e1.name);
     return 0;
}