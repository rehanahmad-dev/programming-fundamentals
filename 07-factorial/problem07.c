#include <stdio.h>

int main() {
  int my_number;

  printf("Enter number : ");
  scanf("%d", &my_number);

  int factorial;

  factorial = 1;

  for (int count = 1; count <= my_number; count++) {
    factorial *= count;
  }

  printf("\nFactorial of %d = %d\n", my_number, factorial);
  printf("\n");

  return 0;
}
