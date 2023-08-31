#include <stdio.h>

int main() {

  int first_number, second_number;

  printf("Enter 1st number : ");
  scanf("%d", &first_number);

  printf("Enter 2nd number : ");
  scanf("%d", &second_number);

  printf("\n");

  for (int count = 1; count <= second_number; count++)
  {
    printf("%d * %d = %d\n", first_number, count, first_number * count);
  }
  printf("\n");

  return 0;
}