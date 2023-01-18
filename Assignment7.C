#include <stdio.h>

int main()
{

    /*Q1) Write a program to find the Nth term of the Fibonnaci seriQes.
    int num, next = 0, pre = 0, cur = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("%dth terms of Fibonacci series is: ", num);

    for (int i = 1; i <= num; i++)
    {
        pre = cur;
        cur = next;
        next = pre + cur;
    }
    printf("%d ", next);
     */

    /*Q2) Write a program to print first N terms of Fibonacci series
    int num, next = 0, pre = 0, cur = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("First %d terms of Fibonacci series: ", num);

    for (int i = 1; i <= num; i++)
    {
        printf("%d ", next);
        pre = cur;
        cur = next;
        next = pre + cur;
    }
     */

    /*Q3) Write a program to check whether a given number is there in the Fibonacci series or not.
    int num, temp = 0, temp1 = 0, temp2 = 1;
    printf("Enter the number: ");
    scanf("%d", &num);

    while (1)
    {
        if (temp < num)
        {
            temp1 = temp2;
            temp2 = temp;
            temp = temp1 + temp2;
        }
        else
            break;
    }
    if (temp == num)
        printf("Number found");

    else
        printf("Number not found");
    */

    /*Q4) Write a program to calculate HCF of two numbers
    int num1, num2, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    while (1)
    {
        if (num1 % num2)
        {
            temp = num1 % num2;
            num1 = num2;
            num2 = temp;
        }
        else
            break;
    }

    printf("HCF: %d", num2);
     */

    /*Q5) Write a program to check whether two given numbers are co-prime numbers or not
    int num1, num2, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    while (1)
    {
        if (num1 % num2)
        {
            temp = num1 % num2;
            num1 = num2;
            num2 = temp;
            // printf("%d %d %d\n",num1,num2,temp);
        }
        else
            break;
    }
    if (num2 == 1)
        printf("Coprime number");
    else
        printf("not coprime number");
     */

    /*Q6) Write a program to print all Prime numbers under 100
    int i, j, flag = 1;
    printf("Prime number under 100: ");

    for (int i = 2; i <= 100; i++)
    {
        if (i == 2 || i == 3)
            printf("%d ", i);
        else
        {
            for (j = 2; j <= i / 2; j++)
                if (i % j)
                    flag = 1;
                else
                {
                    flag = 0;
                    break;
                }
            if (flag == 1)
                printf("%d ", i);
        }
    }

     */
    /*Q7) Write a program to print all Prime numbers between two given numbers
    int num1, num2, flag1 = 1;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Prime number under 100: ");

    for (int i = num1; i <= num2; i++)
    {
        if (i == 2 || i == 3)
            printf("%d ", i);
        else
        {
            for (j = 2; j <= i / 2; j++)
                if (i % j)
                    flag1 = 1;
                else
                {
                    flag1 = 0;
                    break;
                }
            if (flag1 == 1)
                printf("%d ", i);
        }
    }
     */

    /* Q8) Write a program to find next Prime number of a given number
    int num, i, flag1 = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    i = num;
    printf(" next three Prime numbers are: ");

    while (num)
    {
        i++;
        if (i == 2 || i == 3)
            printf("%d ", i);
        else
        {
            for (int j = 2; j <= i / 2; j++)
                if (i % j)
                    flag1 = 1;
                else
                {
                    flag1 = 0;
                    break;
                }
            if (flag1 == 1)
            {
                printf("%d ", i);
                break;
            }
        }
    }
    */

    /* Q9) Write a program to check whether a given number is an Armstrong numbermor not
    int num,temp,mod,sum=0;
    printf("Enter number: ");
    scanf("%d",&num);
    temp=num;
    while(temp)
    {
        mod=temp%10;
        temp/=10;
        sum=sum+(mod*mod*mod);
    }
    if(sum==num)
    printf("Armstrong Number");
    else
    printf("Not an Armstrong Number");
     */

    /* Q10) Write a program to print all Armstrong numbers under 1000
    int temp, mod, sum;
    printf("Armstrong Numbers under 1000: ");
    for (int num = 0; num < 1000; num++)
    {
        temp = num;
        sum=0;
        while (temp)
        {
            mod = temp % 10;
            temp /= 10;
            sum = sum + (mod * mod * mod);
        }
            // printf("%d x",num);
        if (sum == num)
            printf("%d ",num);
    }
     */
    return 0;
}