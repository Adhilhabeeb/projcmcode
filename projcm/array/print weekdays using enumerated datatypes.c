#include <stdio.h>

enum weekdays {
  Sunday,
  Monday,
  Tuesday,
  Wednesday,
  Thursday,
  Friday,
  Saturday
};

int main() {
  enum weekdays day;

  printf("Enter a weekday: ");
  scanf("%d", &day);

  switch (day) {
    case Sunday:
      printf("Sunday is the first day of the week.\n");
      break;
    case Monday:
      printf("Monday is the second day of the week.\n");
      break;
    case Tuesday:
      printf("Tuesday is the third day of the week.\n");
      break;
    case Wednesday:
      printf("Wednesday is the fourth day of the week.\n");
      break;
    case Thursday:
      printf("Thursday is the fifth day of the week.\n");
      break;
    case Friday:
      printf("Friday is the sixth day of the week.\n");
      break;
    case Saturday:
      printf("Saturday is the seventh day of the week.\n");
      break;
    default:
      printf("Invalid weekday.\n");
  }

  return 0;
}