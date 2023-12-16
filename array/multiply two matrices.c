#include <stdio.h>
#include <stdlib.h>

int main() {
  int a[3][3], b[3][3], c[3][3], i, j, k;

  printf("Enter the elements of the first matrix:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  printf("Enter the elements of the second matrix:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &b[i][j]);
    }
  }

  // Multiply the two matrices
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      c[i][j] = 0;
      for (k = 0; k < 3; k++) {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }

  // Print the product of the two matrices
  printf("The product of the two matrices is:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d ", c[i][j]);
    }
    printf("\n");
  }

  return 0;
}