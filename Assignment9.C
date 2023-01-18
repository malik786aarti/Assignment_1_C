#include <stdio.h>
#include<stdlib.h>

int main()
{
    /*Q1) Write a program which takes the month number as an input and display
    number of days in that month.
    int days;
    printf("Enter month number: ");
    scanf("%d", &days);

    switch (days)
    {
    case 1:
    {
        printf("Month = January\nNuumber of days = 31");
        break;
    }
    case 2:
    {
        printf("Month = February\nNuumber of days = 28");
        break;
    }

    case 3:
    {
        printf("Month = March\nNuumber of days = 31");
        break;
    }

    case 4:
    {
        printf("Month = April\nNuumber of days = 30");
        break;
    }
    case 5:
    {
        printf("Month = May\nNuumber of days = 31");
        break;
    }

    case 6:
    {
        printf("Month = June\nNuumber of days = 30");
        break;
    }

    case 7:
    {
        printf("Month = July\nNuumber of days = 31");
        break;
    }

    case 8:
    {
        printf("Month = August\nNuumber of days = 31");
        break;
    }

    case 9:
    {
        printf("Month = September\nNuumber of days = 30");
        break;
    }

    case 10:
    {
        printf("Month = October\nNuumber of days = 31");
        break;
    }

    case 11:
    {
        printf("Month = November\nNuumber of days = 30");
        break;
    }

    case 12:
    {
        printf("Month = December\nNuumber of days = 31");
        break;
    }
    default:
        printf("Invalid month");
    }
    */

    /* Q2) Write a menu driven program with the following options:
        a. Addition
        b. Subtraction
        c. Multiplication
        d. Division
        e. Exit
        */
    int x, y,opr;
    printf("\nEnter operation");

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Exit\n");

    scanf("%d",&opr);
    switch (opr)
    {
    case 1:
    {
        printf("Enter two numbers: ");
        scanf("%d %d", &x, &y);
        printf("Sum = %d", x + y);
        break;
    }
    case 2:
    {
        printf("Enter two numbers: ");
        scanf("%d %d", &x, &y);
        printf("Difference = %d ", x - y);
        break;
    }
    case 3:
    {
        printf("Enter two numbers: ");
        scanf("%d %d", &x, &y);
        printf("Muliplication = %d", x * y);
        break;
    }
    case 4:
    {
        printf("Enter two numbers: ");
        scanf("%d %d", &x, &y);
        printf("Divisor = %d\nRemainder = %d", x / y, x % y);
        break;
    }
    default:
        exit (0);
    }
  /* Q3) Write a program which takes the day number of a week and displays a
unique greeting message for the day.
*/
 int day;
    printf("Enter day number: ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
    {
        printf("Month = January\nNuumber of days = 31");
        break;
    }
    return 0;
}