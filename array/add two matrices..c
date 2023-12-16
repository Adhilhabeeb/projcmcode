#include <stdio.h>

int main() {
  // Declare two matrices
  int mat1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int mat2[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};

  // Declare a new matrix to store the result of the addition
  int result[3][3];

  // Add the two matrices and store the result in the new matrix
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      result[i][j] = mat1[i][j] + mat2[i][j];
    }
  }

  // Print the result
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }

  return 0;
}