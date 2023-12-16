#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  int i, len, flag = 0;

  printf("Enter a string: ");
  scanf("%s", str);

  len = strlen(str);

  for (i = 0; i < len / 2; i++) {
    if (str[i] != str[len - i - 1]) {
      flag = 1;
      break;
    }
  }

  if (flag == 0) {
    printf("The string is a palindrome.\n");
  } else {
    printf("The string is not a palindrome.\n");
  }

  return 0;
}