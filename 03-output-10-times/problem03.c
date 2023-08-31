#include <stdio.h>

int main() {
  int my_number;

  printf("Enter number : ");
  scanf("%d", &my_number);
  printf("\n");

  for (int count = 0; count < 10; count++) {
    printf("Output_no%d = ", count + 1);
    printf("%d\n", my_number);
  }
  printf("\n");

  return 0;
}
