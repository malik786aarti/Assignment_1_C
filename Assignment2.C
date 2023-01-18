#include<stdio.h>

int main()
{
/* Q1) program to print unit digit of a given number
        int x;
        printf("Enter the Number: ");
        scanf("%d",&x);
        printf("Unit digit of %d is %d",x,(x%10));
*/

/* Q2) program to print a given number without its last digit.
        int x;
        printf("Enter the Number: ");
        scanf("%d",&x);
        printf("Number ithout it's last digit of %d is %d",x,(x/10));
*/

/* Q3) program to swap values of two int variables
        int x,y,temp;
        printf("Enter two Numbers: ");
        scanf("%d %d", &x, &y);
        printf("Before swapping:  x = %d and y = %d",x,y);
        temp=x;
        x=y; 
        y=temp;
        printf("\nAfter swapping:  x = %d and y = %d",x,y);
*/

/* Q4) program to swap values of two int variables without using a third variable.
        int x,y;
        printf("Enter two Numbers: ");
        scanf("%d %d", &x, &y);
        printf("Before swapping:  x = %d and y = %d",x,y);
        x=x+y; 
        y=x-y;
        x=x-y;
        printf("\nAfter swapping:  x = %d and y = %d",x,y);
*/

/* Q5) Program to input a three-digit number and display the sum of the digits.
        int x,temp;
        printf("Enter a three digit Number: ");
        scanf("%3d", &x);
        temp=(x%10)+(x/10%10)+(x/100);
        printf("Sum of digits of %d is %d ",x,temp);
*/

/* Q6) Program which takes a character as an input and displays its ASCII code.
         char ch;
        printf("Enter a character: ");
        scanf("%c", &ch);
        printf("ASCII code of %c is %d ",ch,ch);

*/

// Q7) Program to find the position of first 1 in LSB.
//         int x,count=0;
//         printf("Enter a number: ");
//         scanf("%d",&x);
//         while(1){
//                 count++;
                
//                 if(x&1)
//                          break;
//                 x=x>>1;
//         }
//        printf("Position of first 1 in LSB is %d",count);

/* Q8) Program to check whether the given number is even or odd using a bitwise operator.
         int x;
        printf("Enter a Number: ");
        scanf("%d", &x);
        if(x&1)
                printf("Odd number");
        else
                printf("Even number");
   */             
/* Q9) Program to print size of an int, a float, a char and a double type variable
        printf("Size of int = %d",sizeof(int));
        printf("\nSize of float = %d",sizeof(float));
        printf("\nSize of char = %d",sizeof(char));
        printf("\nSize of double = %d",sizeof(double));
*/

/* Q10) Program to make the last digit of a number stored in a variable as zero. (Example - if x=2345 then make it x=2340)
        int x,temp;
        printf("Enter a Number: ");
        scanf("%d", &x);
        temp=x/10*10;
        printf("Resulting number is %d",temp);
*/

/* Q11) Program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. (Example - number=234 and digit=9 then the resulting number is 2349)
        int x,digit,temp;
        printf("Enter a Number and a digit: ");
        scanf("%d %d", &x, &digit);
        temp=x*10+digit;
        printf("Resuting number is %d",temp);
*/
        
/* Q12) Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
        int rs;
        float usd;
        printf("Enter amount in Rupees: ");
        scanf("%d", &rs);
        usd=rs/76.23;
        printf("amount in USd is %.2f",usd);
*/        
//  Q13) Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.
        int x,temp;
        printf("Enter a three digit number: ");
        scanf("%d", &x);
        temp=(x%100)*10+(x/100);
        printf("After rotation number is %d",temp);


return 0;
}