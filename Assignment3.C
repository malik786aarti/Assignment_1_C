#include<stdio.h>

int main()
{
/*1. Write a program to check whether a given number is positive or non-positive.
        int x;
        printf("Enter a number: ");
        scanf("%d",&x);

        if(x>0)
        printf("Positive number");
        else 
        printf("Non Positive");

2. Write a program to check whether a given number is divisible by 5 or not
        int x;
        printf("Enter a number: ");
        scanf("%d",&x);

        if(x%5)
        printf("Not Divisible by 5");
        else
        printf("Divisible by 5");

3. Write a program to check whether a given number is an even number or an odd number.
        int x;
        printf("Enter a number: ");
        scanf("%d",&x);

        if(x%2)
        printf("Odd Number");
        else
        printf("Even Number");

4. Write a program to check whether a given number is an even number or an odd number without using % operator.
        int x;
        printf("Enter a number: ");
        scanf("%d",&x);

        if(x&1)
        printf("Odd Number");
        else
        printf("Even Number");

5. Write a program to check whether a given number is a three-digit number or not.
        int x;
        printf("Enter a three digit number: ");
        scanf("%d",&x);

        if(x/1000==0 && x/100>0)
        printf("%d is a three digit Number",x);
        else
        printf("%d is not a three digit Number",x);

6. Write a program to print greater between two numbers. Print one number of both are the same.
        int x,y;
        printf("Enter two numbers: ");
        scanf("%d %d",&x,&y);

        if(x>y)
        printf("Greater Number: %d\n",x);
        else
        printf("Greater Number: %d\n",y);
    
7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots.
        int a,b,c;
        printf("Enter Quadratic Equation: ax^2 + bx + c");
        scanf("%d %d %d",&a,&b,&c);
    
        d=(b*b)-(4*a*c);
        if(d>0)
        printf("Roots are real & distinct");
        else if(d==0)
        printf("Roots are real & equal");
        else
        printf("Roots are imaginary");

8. Write a program to check whether a given year is a leap year or not.
*/
        int year;
        printf("Enter Year: ");
        scanf("%d",&year);

        if(year%400==0 ||year%4==0 && year%100!=0)
        printf("Leap Year");
        else
        printf("Not leap Year");
/*
9. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
        int x,y,z;
        printf("Enter three numbers: ");
        scanf("%d %d %d",&x,&y,&z);

        if(x>y )
        {
            if(x>z)
            printf("Greater Number: %d\n",x);
            else
            printf("Greater Number: %d\n",z);
        }
        else 
        {
            if(y>z)
            printf("Greater Number: %d\n",y);
            else
            printf("Greater Number: %d\n",z);
        }    
        
10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
        int c,s,temp;
        printf("\ncost price:  ");
        scanf("%d",&c);
        printf("selling price: ");
        scanf("%d",&s);

        if(c>s)
        {
            temp=(c-s)*100/c;
            printf("Loss : %d%%",temp);
        }
        else if(s>c)
        {
            temp=(s-c)*100/c;
            printf("profit : %d%%",temp);
        }
        else
        printf("No profit No Loss");
            
11.Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.
        int x1,x2,x3,x4,x5;
        printf("Enter marks of 5 Subjects: ");
        scanf("%d %d %d %d %d",&x1,&x2,&x3,&x4,&x5);

        if(x1>32 && x2>32 && x3>32 && x4>32 && x5>32)
        printf("Candidate Passed the Examination");
        else
        printf("Candidate failed the Examination");

12. Write a program to check whether a given alphabet is in uppercase or lowercase.
        char ch;
        printf("\nEnter an Alphabet: ");
        scanf("%c",&ch);
        if(ch>='A' && ch<='Z')
        printf("UpperCase Alphabet");

        else
        printf("LowerCase Alphabet");

13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
        int x;
        printf("Enter a number: ");
        scanf("%d",&x);

        if(x%3==0 && x%2==0)
        printf("%d : Divisible by 3 and 2",x);
        else
        printf("%d : Not Divisible by 3 and 2",x);

14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
        int x;
        printf("Enter a number: ");
        scanf("%d",&x);

        if(x%7==0 && x%3==0)
        printf("%d : Divisible by 3 and 7",x);
        else if(x%3==0)
        printf("%d : Divisible by 3",x);
        else if(x%7==0)
        printf("%d : Divisible by 7",x);
        else
        printf("%d : Not Divisible by 3 and 7",x);

15. Write a program to check whether a given number is positive, negative or zero.
        int x;
        printf("Enter a number: ");
        scanf("%d",&x);

        if(x>0)
        printf("Positive number");
        else if(x<0)
        printf("Negative");
        else
        printf("Zero");

16. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.
        char ch;
        printf("\nEnter an Alphabet: ");
        scanf("%c",&ch);
        
        if(ch>='A' && ch<='Z')
        printf("Upper Case Alphabet");
        else if(ch>='a' && ch<='z')
        printf("Lower Case Alphabet");
        else if(ch>='0' && ch<='9')
        printf("Digit");
        else
        printf("special Charater");

17. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
        int a,b,c;
        printf("\nEnter three sides of a triangle: ");
        scanf("%d %d %d",&a,&b,&c);
        if(a+b>c && b+c>a && c+a>b)
        printf("triangle is valid");
        else
        printf("triangle is not valid");

18. Write a program which takes the month number as an input and display number of days in that month
        int mon;
        printf("Enter month number: ");
        scanf("%d",&mon);

        if(mon==1)
        printf("Month = January\nDays = 31");
        else if(mon==2)
        printf("Month = February\nDays = 28");
        else if(mon==3)
        printf("Month = March\nDays = 31");
        else if(mon==4)
        printf("Month = April\nDays = 30");
        else if(mon==5)
        printf("Month = May\nDays = 31");
        else if(mon==6)
        printf("Month = June\nDays = 30");
        else if(mon==7)
        printf("Month = July\nDays = 31");
        else if(mon==8)
        printf("Month = August\nDays = 31");
        else if(mon==9)
        printf("Month = September\nDays = 30");
        else if(mon==10)
        printf("Month = October\nDays = 31");
        else if(mon==11)
        printf("Month = November\nDays = 30");
        else if(mon==12)
        printf("Month = December\nDays = 31");
        else
        printf("Invalid number Entered");

*/
return 0;
}