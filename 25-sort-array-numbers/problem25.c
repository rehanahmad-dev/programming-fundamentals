#include <stdio.h>

int main() {
  int array[10];

  printf("Enter 10 numbers:\n\n");
  for (int count_no1 = 0; count_no1 < 10; count_no1++) {
    printf("Input no_%d = ", count_no1 + 1);
    scanf("%d", &array[count_no1]);
  }

  int temp;

  for (int count_no1 = 0; count_no1 < 10; count_no1++) {
    for (int count_no2 = count_no1 + 1; count_no2 < 10; count_no2++) {
      if (array[count_no1] > array[count_no2]) {
        temp = array[count_no1];
        array[count_no1] = array[count_no2];
        array[count_no2] = temp;
      }
    }
  }

  printf("\nSorted numbers:\n\n");

  for (int count_no1 = 0; count_no1 < 10; count_no1++) {
    printf("%d ", array[count_no1]);
  }

  printf("\n\n");
  return 0;
}
