#include <stdio.h>

void name(char str[]){
    int i;
    i=0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    
}
int main()
{
    // Is string a data type in c ? 
    // Answer=No 
    // String is not a supported data type in c but it is a very useful concept used to model real world entities like name,city,etc.
    // We express strings using an array of characters terminated by a null character ('\0')
    
    
    // What are string ?
    // String array of character terminated by NULL character.
    // Strings in c is created by creating an array of character.
    // We need an extra character ('\0' or null character ) to tell compiler that the strings end here.
    

    char str[]={'S','h','i','v','a','m','\0'};
    name(str);
    // Taking String input from the user.
    //  char str[10];
    //  gets(str); //Input the string 
    // printf("%s\n",str);
    // puts(str); 
    
    return 0;
}