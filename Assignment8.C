#include <stdio.h>
int main()
{
    // Q1)

    //     for(int i=1; i<=5; i++)
    //     {
    //         for(int j=1; j<=5; j++)
    //         if(j<=i)
    //         printf("*");
    //         else
    //         printf(" ");
    //         printf("\n");
    //     }
    //         printf("\n");
    //  Q2)
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 0; j <= 5; j++)
    //         if (j<6 - i)
    //             printf(" ");
    //         else
    //             printf("*");
    //     printf("\n");
    // }
    printf("\n");
    //  Q3)
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         if (j <= 6- i)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }

    //     printf("\n");
    // }
    //         printf("\n");
    // Q4)
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         if (j >= i)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }
    //     printf("\n");
    // }
    //     printf("\n");
    // Q5)
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 9; j++)
    //     {
    //         if (j >= 6 - i && j <= 4 + i)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    // Q6)
    //  for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 9; j++)
    //     {
    //         if (j>=i && j <= 10-i)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }
    //     printf("\n");
    // }
    //     printf("\n");
    // Q7)
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 9; j++)
    //     {
    //         if (j>6-i && j < 4+i)
    //             printf(" ");
    //         else
    //             printf("*");
    //     }
    //     printf("\n");
    // }
    // Q8)
    //  for (int i = 1; i <= 4; i++)
    //     {
    //         int k=0;
    //         for (int j = 1; j <= 7; j++)
    //         {
    //             if (j>=5-i && j <= 3+i)
    //                if(j<=4)
    //                {
    //                 printf("%d",++k);

    //                }
    //                 else{

    //                 printf("%d",--k);
    //                 }
    //             else
    //                 printf(" ");
    //         }
    //         printf("\n");
    //     }
    //         printf("\n");
    // Q9)
    //  for (int i = 1; i <= 5; i++)
    // {
    //         int k=0;
    //     for (int j = 1; j <= 9; j++)
    //     {
    //         if (j>=i && j <= 8-i)
    //             if(j<=4)
    //             printf("%d",++k);
    //             else
    //             printf("%d",--k);
    //         else
    //             printf(" ");
    //     }
    //     printf("\n");
    // }
    // Q10)
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (j <= 5 - i || j >= 3 + i)
            {
                if (j <= 4)
                    printf("%d", j);
                else
                    printf("%d",8-j);
            }
            else
                printf(" ");
                    // printf("%d cvb",j);
        }
        printf("\n");
    }
    printf("\n");
    // Q11)
    //  for (int i = 1; i <= 4; i++)
    //     {
    //         char k=64;
    //         for (int j = 1; j <= 7; j++)
    //         {
    //             if (j>=5-i && j <= 3+i)
    //                if(j<=4)
    //                {
    //                 printf("%c",++k);

    //                }
    //                 else{

    //                 printf("%c",--k);
    //                 }
    //             else
    //                 printf(" ");
    //         }
    //         printf("\n");
    //     }
    //         printf("\n");

    // Q12)
    //  for (int i = 1; i <= 5; i++)
    // {
    //         int k=64;
    //     for (int j = 1; j <= 9; j++)
    //     {
    //         if (j>=i && j <= 8-i)
    //             if(j<=4)
    //             printf("%c",++k);
    //             else
    //             printf("%c",--k);
    //         else
    //             printf(" ");
    //     }
    //     printf("\n");
    // }
    //     printf("\n");

    // Q13)
    for (int i = 1; i <= 7; i++)
    {   int k=65;
        for (int j = 1; j <= 13; j++)
        {
            if (j <= 8 - i || j >= 6 + i)
            {
                if (j <= 7)
                    printf("%c", k++);
                else
                    printf("%c",--k);
            }
            else
                printf(" ");
                    // printf("%c cvb",j);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}