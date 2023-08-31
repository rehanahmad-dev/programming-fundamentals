#include <stdio.h>

int main() {
  int my_number;

  printf("Enter number : ");
  scanf("%d", &my_number);

  int sum;

  for (int count = 1; count <= my_number; count++)

  {
    if (my_number % count == 0) {
      sum++;
    }
  }

  if (sum == 2) {
    printf("\n%d is Prime\n\n", my_number);
  } else {
    printf("\n%d is not prime\n\n", my_number);
  }

  return 0;
}
