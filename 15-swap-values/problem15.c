#include <stdio.h>

int main() {
  int first_number, second_number, temp;

  printf("Enter 1st number : ");
  scanf("%d", &first_number);

  printf("Enter 2nd number : ");
  scanf("%d", &second_number);
  printf("\n");

  temp = first_number;
  first_number = second_number;
  second_number = temp;

  printf("1st number = %d\n", first_number);

  printf("2nd number = %d\n", second_number);
  printf("\n");

  return 0;
}
