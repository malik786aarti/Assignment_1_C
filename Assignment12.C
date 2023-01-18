#include<stdio.h>
// 1. Write a recursive function to print first N natural numbers
 void printnum(int n)
 {
    if(n==0)
    return ;

    printnum(n-1);
    printf("%d ",n);
 }

// 2. Write a recursive function to print first N natural numbers in reverse order
void printrev(int n)
{
    if(n==0)
    return;

    printf("%d ",n);
    printrev(n-1);
}

// 3. Write a recursive function to print first N odd natural numbers
void printodd(int n)
{
    if(n==0)
    return;

    printodd(n-1);
    printf("%d ",(2*n)-1);
}

// 4. Write a recursive function to print first N odd natural numbers in reverse order
void printoddrev(int n)
{
    if(n==0)
    return;

    printf("%d ",(2*n)-1);
    printoddrev(n-1);
}

// 5. Write a recursive function to print first N even natural numbers
void printeven(int n)
{
    if(n==0)
    return;

    printeven(n-1);
    printf("%d ",2*n);
}

// 6. Write a recursive function to print first N even natural numbers in reverse order
void printevenrev(int n)
{
    if(n==0)
    return;

    printf("%d ",2*n);
    printevenrev(n-1);
}

// 7. Write a recursive function to print squares of first N natural numbers
void printsquare(int n)
{
     if(n==0)
    return ;

    printsquare(n-1);
    printf("%d ",n*n);
}

// 8. Write a recursive function to print binary of a given decimal number
    void BinaryConversion(int n)
    {   
        if(n==0)
        return ;

        BinaryConversion(n/2);
        printf("%d",n%2);

    }

// 9. Write a recursive function to print octal of a given decimal number
    void octalConversion(int n)
    {   
        if(n==0)
        return ;

        octalConversion(n/8);
        printf("%d",n%8);

    }

// 10. Write a recursive function to print reverse of a given number
    void revNumber(int n)
    {   
        if(n==0)
        return;

        printf("%d",n%10);
        revNumber(n/10);
    }

int main()
{
    
    // printevenrev(5);
    printf("\n");
    // printsquare(5);
    octalConvrsion(12);
    revNumber(1233);
    return 0;
}