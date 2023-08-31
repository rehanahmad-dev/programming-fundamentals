#include <stdio.h>

int main() {
  int array[3][4];

  for (int count_no1 = 0; count_no1 < 3; count_no1++) {
    for (int count_no2 = 0; count_no2 < 4; count_no2++) {
      printf("Enter index value [%d][%d] : ", count_no1, count_no2);
      scanf("%d", &array[count_no1][count_no2]);
    }
  }

  printf("\n2D array of (3*4) :\n\n");

  for (int count_no1 = 0; count_no1 < 3; count_no1++) {
    for (int count_no2 = 0; count_no2 < 4; count_no2++) {
      printf("%d  ", array[count_no1][count_no2]);
    }
    printf("\n");
  }
  printf("\n");

  return 0;
}
