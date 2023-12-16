#include <stdio.h>

int main() {
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  // Declare an array of n elements
  int arr[n];

  // Get the elements of the array from the user
  printf("Enter %d elements: \n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  // Print the elements of the array using a pointer
  printf("Elements in the array: ");
  int *ptr = arr; // Declare a pointer to the array
  for (int i = 0; i < n; i++) {
    printf("%d ", *(ptr + i)); // Print the element at the current pointer position
  }

  return 0;
}