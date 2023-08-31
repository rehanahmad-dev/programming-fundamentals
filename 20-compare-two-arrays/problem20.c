#include <stdio.h>

int main() {
  float array_1[10], array_2[10];

  printf("Enter 10 numbers for Array 1\n\n");
  for (int count_no1 = 0; count_no1 < 10; count_no1++) {
    printf("Element no_%d : ", count_no1 + 1);
    scanf("%f", &array_1[count_no1]);
  }

  printf("\nEnter 10 numbers for Array 2\n\n");
  for (int count_no1 = 0; count_no1 < 10; count_no1++) {
    printf("Element no_%d : ", count_no1 + 1);
    scanf("%f", &array_2[count_no1]);
  }

  int smaller_value;

  for (int count_no1 = 0; count_no1 < 10; count_no1++) {
    for (int count_no2 = 0; count_no2 < 10; count_no2++) {
      if (array_1[count_no1] < array_2[count_no2]) {
        smaller_value = 1;
        break;
      }
    }
  }

  if (smaller_value) {
    printf(
        "\nThere is a element in Array 1 with a smaller value than  Array "
        "2.\n");
  } else {
    printf(
        "\nThere is no element in Array 1 with a smaller value than  Array "
        "2.\n");
  }

  return 0;
}
