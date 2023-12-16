#include <stdio.h>

int main()
{
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10};
    int arr3[10];
    int i, j, k;

    i = j = k = 0;

    while (i < 5 && j < 5)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < 5)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    while (j < 5)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }

    printf("The merged array is: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}