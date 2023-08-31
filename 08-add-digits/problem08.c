#include <stdio.h>

int main() {
  int my_number;

  printf("Enter number : ");
  scanf("%d", &my_number);

  int reminder, sum;

  while (my_number > 0)

  {
    reminder = my_number % 10;
    sum += reminder;
    my_number /= 10;
  }

  printf("\nSum of digits = %d\n\n", sum);

  return 0;
}
