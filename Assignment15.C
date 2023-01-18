#include <stdio.h>
// 1. Write a function to find the greatest number from the given array of any size. (TSRS)
int Greater(int a[], int size)
{
    int max = a[0];
    for (int i = 1; i < size; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    return (max);
}

// 2. Write a function to find the smallest number from the given array of any size. (TSRS)
int smallest(int a[], int size)
{
    min = a[0];
    for (int i = 1; i < size; i++)
    {
        if (min > a[i])
            min = a[i];
    }
    return (min);
}
// 3. Write a function to sort an array of any size. (TSRS)
int sort(int a[], int size)
{
    int temp;
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
    return (a);
}

// 5.Write a function to find the first occurrence of adjacent duplicate values in the array.Function has to return the value of the element.
void firstDuplicate(int a[],size)
{
    int a[],ele=0;
    a=sort(a,size);
    for(int i=0; i < size; i++)
    {
        if(a[i]==a[i+1])
        {
            ele=a[i];
            break;
        }
    }
    return ele;
}
// 6.Write a function in C to read n number of values in an array and display it in reverse order.
void read(int num[], int size)
{
    printf("Enter %d number of an array", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &num[i]);

    printf("Reverse of array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", num[i]);
}
// 7. Write a function in C to count a total number of duplicate elements in an array.
void duplicate(int a[], int size)
{
    int count = 0;
    a = sort(a, size);
    for (int i = 0; i < size - 1; i++)
    {
        if (a[i] == a[i + 1])
            count++;
    }
    printf("Number of duplicate elements i an array: %d", count);
}
// 8. Write a function in C to print all unique elements in an array.
void unique(int a[], int size)
{
    a = sort(a, size);
    printf("Unique elements in an array: ");
    if(a[0] != a[1])
    printf("%d ",a[0]);
    for (int i = 1; i < size - 1; i++)
    {
        if (a[i] != a[i - 1] && a[i] !=a[i + 1])
    printf("%d ",a[i]);
    }
}
// 9. Write a function in C to merge two arrays of the same size sorted in descending order.
void merge(int a[], int b[], size1,size2)
{   int i, k = 0, j = 0,c[size1+size2]
    for( i = 0;i < size1 + size2 || (a[k] < size1 && a[k] > size2);i++ )
    {
        if(a[k] < b[j] )
       { 
        c[i] = a[k];
        k++;
       }
        else
        {
        c[i] = b[j];
        j++;
        }
    }
    if(k<size1)
    while(k<size1)
    {
        c[i]=a[k];
        i++;k++;
    }
    else
    while(k<size2)
    {
        c[i]=b[j];
        i++;j++;
    }

}
// 10. Write a function in C to count the frequency of each element of an array.
void frequency(int a[],size)
{
    int count=1,a[size];
    a=sort(a,size);
    if(int i = 0;i < size+1; i++)
    {
        if(a[i]==a[i+1])
        count++;
        else{
          printf("\nOccurance of %d is %d times", a[i], count);  
            count=1;

        }
    }
}
int main()
{
    retrun 0;
}