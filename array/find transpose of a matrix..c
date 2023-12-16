#include <stdio.h>

int main() {
  int rows, cols;
  printf("Enter the number of rows and columns of the matrix: ");
  scanf("%d %d", &rows, &cols);

  int matrix[rows][cols];
  printf("Enter the elements of the matrix:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  int transpose[cols][rows];
  for (int i = 0; i < cols; i++) {
    for (int j = 0; j < rows; j++) {
      transpose[i][j] = matrix[j][i];
    }
  }

  printf("The transpose of the matrix is:\n");
  for (int i = 0; i < cols; i++) {
    for (int j = 0; j < rows; j++) {
      printf("%d ", transpose[i][j]);
    }
    printf("\n");
  }

  return 0;
}