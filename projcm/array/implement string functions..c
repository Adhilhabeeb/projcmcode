#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "Hello";
  char str2[] = "World";
  int length;

  // Get the length of the first string
  length = strlen(str1);

  // Copy the first string to the second string
  strcpy(str2, str1);

  // Concatenate the two strings together
  strcat(str2, "!");

  // Compare the two strings
  if (strcmp(str1, str2) == 0) {
    printf("The strings are equal.\n");
  } else {
    printf("The strings are not equal.\n");
  }

  return 0;
}