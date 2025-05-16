#include <stdio.h>
void convertkm()
{
    float km, miles;
    printf("Enter distance in kilometers: \n");
    scanf("%f\n", &km);
    miles = km * 0.62137;
    printf("%.2f kilometers = %.2f miles", km, miles);
}
void convertcm()
{
    float cm, inches;
    printf("Enter distance in cm:\n");
    scanf("%f", &cm);
    inches = cm * 0.393701;
    printf("%.2f cm = %.2f inches", cm, inches);
}

void convertinches()
{
    float inches,foot;
    printf("Enter distance in inches:\n");
    scanf("%f", &inches);
    foot = inches*0.0833333;
    printf("%.2f inches = %.2f foot",inches,foot);
}

int main()
{
    int choice;
    do
    {
        printf("\nUnit Conversion Menu:\n");
        printf("1. Kilometers to Miles\n");
        printf("2. Cm to Inches\n");
        printf("3. Inches to foot\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            convertkm();
            break;
        case 2:
                convertcm();
                break;
        case 3:
            convertinches();
            break;
        default:
            printf("Invalid choice! Please enter a number between 1 and 4.\n");
            break;
        }
    } while (choice < 4);

    return 0;
}