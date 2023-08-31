#include <stdio.h>

int main() {
  int my_number;

  printf("Enter number : ");
  scanf("%d", &my_number);
  printf("\n");

  int sum, fibonacci, range;

  fibonacci = 0;
  range = 1;

  for (int count = 0; count < my_number; count++)

  {
    printf("%d ", fibonacci);

    sum = fibonacci + range;
    fibonacci = range;
    range = sum;
  }
  printf("\n\n");

  return 0;
}