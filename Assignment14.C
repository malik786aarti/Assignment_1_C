#include <stdio.h>

int main()
{
    // 1. Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.
    int n, a[100], b[100], sum = 0, sumodd = 0, sumeven = 0;

    int max, min, secmax, secmin, temp;
    float avg;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter values of array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        sum += a[i];
    printf("Sum: %d", sum);

    // 2. Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.
    avg = sum / 10.0;
    printf("\navg: %f", avg);

    // 3. Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2)
            sumodd += a[i];
        else
            sumeven += a[i];
    }
    printf("\nSum of odd number : %d\nSum of even number : %d", sumodd, sumeven);

    //  4. Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
    max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    printf("\nGreatest number: %d", max);

    // 5. Write a program to sort elements of an array of size 10. Take array values from the user.
    min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
    }
    printf("\nSmallest number: %d", min);

    //  6. Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size - 1; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[j] = temp;
                a[i] = a[j];
            }
        }
    }

    // 7. Write a program to find second largest in an array.Take array values from the user.
    // max=a[0];
    // for(int i = 1;i < n; i++)
    // {
    //     if(max<a[i])
    //     max=a[i];
    // }
    // printf("\nGreatest number: %d",max);

    // 8. Write a program to find the second smallest number in an array.Take array values from the user.
    // max = a[0];
    // secmax = a[0];
    // 9. Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user.
    for (int x = 0, y = n - 1; x < n / 2; x++, y--)
    {
        int temp = a[x];
        a[x] = a[y];
        a[y] = temp;
    }
    printf("\nREverse array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    // 10. Write a program in C to copy the elements of one array into another array.Take array values from the user.
    printf("\n duplicate array: ");
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
        printf("%d ", b[i]);
    }

    return 0;
}