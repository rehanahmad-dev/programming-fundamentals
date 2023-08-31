#include <stdio.h>

int main() {
  int my_number;

  printf("Enter number = ");
  scanf("%d", &my_number);
  printf("\n");

  for (int count = 0; count <= my_number - 1; count++)

  {
    for (int space = 0; space <= my_number - count; space++) {
      printf(" ");
    }
    for (int astric = 0; astric <= count; astric++) {
      printf(" *");
    }
    printf("\n");
  }
  for (int count = my_number - 2; count >= 0; count--) {
    for (int space = 0; space <= my_number - count; space++) {
      printf(" ");
    }
    for (int astric = 0; astric <= count; astric++) {
      printf(" *");
    }
    printf("\n");
  }
  printf("\n");

  return 0;
}
