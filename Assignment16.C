#include<stdio.h>

int main()
{
    int a[3][3],b[3][3];
    printf("Enter element of matrix A: ");
    
    for(int i=0; i<3;i++)
    {
        for(int j=0; j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter element of matrix B: ");
    
    for(int i=0; i<3;i++)
    {
        for(int j=0; j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    
    printf("Sum of matrix A and B: ");
    
    for(int i=0; i<3;i++)
    {
        printf("\n");
        for(int j=0; j<3;j++)
        {
            printf("%d ",a[i][j]+b[i][j]);
        }
    }

}