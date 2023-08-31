#include <stdio.h>

int main() {
  int my_number;

  printf("Enter number : ");
  scanf("%d", &my_number);

  int reminder, sum, reverse;

  reverse = my_number;

  while (my_number > 0) {
    reminder = my_number % 10;
    sum = (sum * 10) + reminder;
    my_number /= 10;
  }

  if (sum == reverse) {
    printf("\n%d is palindrome.\n",sum);
  } else {
    printf("\n%d is not palindrome.\n",sum);
  }
  printf("\n");

  return 0;
}