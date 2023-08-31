#include <stdio.h>

int main() {
  int my_number;

  printf("Enter number : ");
  scanf("%d", &my_number);

  int armstrong, sum, reminder;

  armstrong = my_number;

  while (my_number > 0) {
    reminder = my_number % 10;
    sum += (reminder * reminder * reminder);
    my_number /= 10;
  }
  if (armstrong == sum) {
    printf("\n%d is armstrong.\n\n",armstrong);
  } else {
    printf("\n%d is not armstrong.\n\n",armstrong);
  }

  return 0;
}
