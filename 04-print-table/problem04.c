#include <stdio.h>

int main() {
  int my_number;

  printf("Enter number : ");
  scanf("%d", &my_number);
  printf("\n");

  for (int count = 1; count <= 10; count++) {
    printf("%d * %d = %d\n", my_number, count, my_number * count);
  }
  printf("\n");
  return 0;
}