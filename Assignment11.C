#include <stdio.h>
// 1. Write a function to calculate LCM of two numbers. (TSRS)
int LCM(int num1, int num2)
{
    int mod, lcm, temp, temp2;
    temp = num1;
    temp2 = num2;
    while (1)
    {
        mod = temp % temp2;
        if (mod == 0)
            break;
        temp = temp2;
        temp2 = mod;
    }
    lcm = (num1 * num2) / temp2;
    return (lcm);
}
// 2. Write a function to calculate HCF of two numbers. (TSRS)
int HCF(int num1, int num2)
{
    int mod;
    while (1)
    {
        mod = num1 % num2;
        if (mod == 0)
            break;
        num1 = num2;
        num2 = mod;
    }

    return (num2);
}
// 3. Write a function to check whether a given number is Prime or not. (TSRS)
int prime(int num)
{
    int flag = 1;
    if (num == 2 || num == 3)
        return 1;
    for (int i = 2; 1; i++)
    {
        if (num % i)
            flag = 1;
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        return 1;
    else
        return 0;
}
// 4. Write a function to find the next prime number of a given number. (TSRS)
void nextPrime(int num)
{
    int i, flag = 1;
    i = num;
    if (num == 2)
        printf("%d", ++num);
    else
    {
        while (1)
        {
            num++;
            for (i = 2; i <= num % 2; i++)
            {
                if (num % i)
                    flag = 1;
                else
                {
                    flag = 0;
                    break;
                }

            }
                if (flag){
                    printf("%d", num);
                    break;

                }
        }
    }
}

// 5. Write a function to print first N prime numbers (TSRN)
void Nprime(int num)
{
    int flag = 1,j=2,count=0;
for(;1;j++)
{
    if (j == 2 || j == 3){
        printf("%d ",j);
count++;
    }
    else{

    for (int i = 2; i<=j/2; i++)
    {
        if (j % i)
            flag = 1;
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag){
        printf("%d ",j);
        count++;
    }
    if(count==num)
    break;
    
    }
}
}
// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)
void xprime(int num1, int num2)
{
    int flag = 1;
    for(int i=num1; i<=num2;i++)
    {
    if (i == 2 || i == 3)
        printf("%d ",i);
    for (int j = 2; j<=i/2; j++)
    {
        if (i % j)
            flag = 1;
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("%d ",i);
    }
}

// 7. Write a function to print first N terms of Fibonacci series (TSRN)
void fibonacci(int n)
{
    int pre=0,cur=1,next=0;
    for(int i=1;i<=5;i++)
    {
        printf("%d ",next);
        pre = cur;
        cur = next;
        next = pre + cur;
    }
}

// 8. Write a function to print PASCAL Triangle. (TSRN)
void pascal(int a)
// 9. Write a program in C to find the square of any number using the function.
void square(int x)
{
    printf("\n%d ",x*x);
}
// 10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.

int main()
{

    // Nprime(5);
    // xprime(10,20);
    fibonacci(5);
    square(6);

    return 0;
}
