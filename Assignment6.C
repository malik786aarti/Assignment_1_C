#include<stdio.h>

int main()
{
/* Q1) Write a program to calculate sum of first N natural numbers
     int num,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=1; i<=num; i++)
        sum=sum+i;
    printf("Sum of first %d natural numbers is  %d \n",num,sum);
*/

/* Q2) Write a program to calculate sum of first N even natural numbers
    int num,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=2; i<=2*num; i+=2)
        sum=sum+i;
    printf("Sum of first %d natural numbers is  %d \n",num,sum);
*/

/* Q3) Write a program to calculate sum of first N odd natural numbers
int num,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=1; i<=2*num-1; i+=2)
        sum=sum+i;
    printf("Sum of first %d natural numbers is  %d \n",num,sum);
*/

/* Q4) Write a program to calculate sum of squares of first N natural numbers
    int num,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=1; i<=num; i++)
        sum=sum+i*i;
    printf("Sum of first %d natural numbers is  %d \n",num,sum);
*/

/* Q5) Write a program to calculate sum of cubes of first N natural numbers
    int num,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=1; i<=num; i++)
        sum=sum+i*i*i;
    printf("Sum of first %d natural numbers is  %d \n",num,sum);
*/

/* Q6 Write a program to calculate factorial of a number
int num,fact=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=1; i<=num; i++)
        fact=fact*i;
    printf("Factorial of %d is  %d \n",num,fact);
*/

/* Q7 Write a program to count digits in a given number
    int num,temp,count=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    temp=num;
    while(temp)
    {
        count++;
        temp/=10;
    }
    printf("Number of digits in %d is %d \n",num,count);
*/

/*  Q8 Write a program to check whether a given number is a Prime number or not
int num,flag=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num==2 || num==3)
    printf("%d is a prime number",num);
    else
    {
        for(int i=2; i<num/2; i++)
        {
            if(num%i)
                flag=0;
            else
            {
                flag=1;
                break;
            }    
        }
    }
    if(flag)
       printf("Not Prime");
    else
        printf("Prime");
*/

/* Q9) Write a program to calculate LCM of two numbers
   int a,b;
    printf("Enter to numbers: ");
    scanf("%d %d",&a,&b);

    for(int i=1; i<=a*b; i++)
    {
        if(i%a==0 && i%b==0)
        {
            printf("LCM: %d",i);
            break;
        }

    }
*/

/* Q10) Write a program to reverse a given number

    int num,rev=0,mod;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num)
    {   mod=num%10;
        rev=rev*10+mod;
        num/=10;
    }      
    printf("Reverse number is  %d \n",rev);
*/

return 0;
}