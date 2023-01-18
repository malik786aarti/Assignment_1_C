#include<stdio.h>
//  1. Write a function to calculate the area of a circle. (TSRS)
float area(int rad){
    float ar;
    ar=3.14*rad*rad;
    return ar;
}
// 2. Write a function to calculate simple interest. (TSRS)
float simpleInterest(int pri, float rate, int time)
{
    float si;
    si=(pri*rate*time)/100;
    return si;
}
// 3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS) 
int EvenOdd(int num){
    if(num%2)
    {
        return 0;
    }
    else
    return 1;
}
// 4. Write a function to print first N natural numbers (TSRN)
void print(int n)
{ 
    for(int i=1;i<=n;i++)
    printf("%d",i;);
}
// 5. Write a function to print first N odd natural numbers. (TSRN)
void printOdd(int n)
{
    for(int i=1;i<=n;i++)
    printf("%d",(2*i+1));
}
// 6. Write a function to calculate the factorial of a number. (TSRS)
int fact(int n)
{   temp=1;
    if(n==0)
    return 1;

    for(int i=n;i>=1;i--)
    temp=temp*i;
    return temp;
}
// 7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)


// 8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)

int main()
{
    int r;
    printf("enter radius");
    scanf("%d",&r);
    printf("Area of circle: %.2f",area(r));



return 0;
}