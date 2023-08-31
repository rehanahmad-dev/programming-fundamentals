#include <stdio.h>

int main() {
  int my_number;

  printf("Type number : ");
  scanf("%d", &my_number);
  printf("\n");

  if (my_number % 2 == 0) {
    printf("Even\n\n");
  } else {
    printf("Odd\n\n");
  }

  return 0;
}