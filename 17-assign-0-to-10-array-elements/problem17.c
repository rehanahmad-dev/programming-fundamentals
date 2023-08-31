#include <stdio.h>

int main() {
  int array[10];

  printf("\nArray elements : ");

  for (int count = 0; count < 10; count++) {
    array[count] = 0;
    printf("%d ", array[count]);
  }
  printf("\n\n");

  return 0;
}
