#include <stdio.h>

int main() {
  int my_number;

  printf("Enter number : ");
  scanf("%d", &my_number);
  printf("\n");

  int reminder;
  while (my_number > 0) {
    reminder = my_number % 10;

    printf("%d", reminder);

    my_number /= 10;
  }
  printf("\n\n");


  return 0;
}