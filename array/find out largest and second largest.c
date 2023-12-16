#include <stdio.h>

int main()
{
    int n, i, largest, second_largest;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    second_largest = arr[1];

    for (i = 2; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest)
        {
            second_largest = arr[i];
        }
    }

    printf("Largest element: %d\n", largest);
    printf("Second largest element: %d\n", second_largest);

    return 0;
}