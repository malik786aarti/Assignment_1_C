#include<stdio.h>

int main()
{
/* Q1) Write a program to print MySirG 5 times on the screen
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    printf("MySirG\n");
*/

/* Q2) Write a program to print the first 10 natural numbers.
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    printf("%d ",i);
*/

/* Q3) Write a program to print the first N natural numbers in reverse order
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=n; i>=1; i--)
    printf("%d ",i);
*/

/* Q4) Write a program to print the first N odd natural numbers
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1; i<=2*n-1; i+=2)
    printf("%d ",i);
*/

/* Q5) Write a program to print the first N odd natural numbers in reverse order.
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=2*n-1; i>=1; i-=2)
    printf("%d ",i);
*/

/* Q6) Write a program to print the first N even natural numbers
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1; i<=2*n; i++)
    if(i%2==0)
    printf("%d ",i);
*/

/* Q7) Write a program to print the first N even natural numbers in reverse order
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=2*n; i>=1; i--)
    if(i%2==0)
    printf("%d ",i);
*/

/* Q8) Write a program to print squares of the first N natural numbers
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    printf("%d ",i*i);
*/

/* Q9) Write a program to print cubes of the first N natural numbers
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    printf("%d ",i*i*i);
*/

/* Q10) Write a program to print a table of N.
*/
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
        for(int i=1; i<=10; i++)
    printf("%d X %d = %d \n",num,i,num*i);
return 0;
}