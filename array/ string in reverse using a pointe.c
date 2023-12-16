#include <stdio.h>

int main() {
  char str[] = "Hello, world!";
  char *ptr = str;

  // Find the length of the string.
  int len = 0;
  while (*ptr != '\0') {
    len++;
    ptr++;
  }

  // Reverse the string.
  ptr--;
  for (int i = 0; i < len / 2; i++) {
    char temp = *ptr;
    *ptr = *(ptr - len + i);
    *(ptr - len + i) = temp;
    ptr--;
  }

  // Print the reversed string.
  printf("The reversed string is: %s\n", str);

  return 0;
}