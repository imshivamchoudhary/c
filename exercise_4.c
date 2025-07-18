#include <stdio.h>
// take input from the user and ask user to choose 0 for star pattern and 1 for reversed triangular star pattern


// *
// **
// ***
// **** triangular star patter

void triangulastar(int n){
      printf("it is triangualr star pattern\n");
    for (int i = 0; i <= n; i++)
    {for (int j = 0; j <=i; j++)
    {
        printf("*");
    }
    
        
        printf("\n");
    }
    printf("\n");
    printf("\n");
}

// ***** reversed triangular star patterm
// ****
// ***
// **
// *

void reversestar(int n){
    for (int i = 0; i <= n; i++)
    {for (int j = 0; j <=n-i-1; j++)
    {
        printf("*");
    }
    
        
        printf("\n");
    }
    
}



int main()
{
    int n;
    printf("Enter the number you want to print star patter \n");
    scanf("%d\n",&n);
   triangulastar(n);
    reversestar(n);   
     return 0;
}