#include <stdio.h>
#define size 50
int main() {
  int matrix_no1[size][size], matrix_no2[size][size], rows_of_1, columns_of_1,
      rows_of_2, columns_of_2;

  printf("Enter order for 1st matrix \n");
  printf("Row = ");
  scanf("%d", &rows_of_1);

  printf("Column = ");
  scanf("%d", &columns_of_1);
  printf("\n");

  printf("Enter order for 2nd matrix \n");
  printf("Row = ");
  scanf("%d", &rows_of_2);
  printf("Column = ");
  scanf("%d", &columns_of_2);
  printf("\n");

  if (columns_of_1 != rows_of_2) {
    printf("This order can't be multiply.\n");
  } else {
    printf("Enter elements for 1st matrix \n");

    for (int count_no1 = 0; count_no1 < rows_of_1; count_no1++) {
      for (int count_no2 = 0; count_no2 < columns_of_2; count_no2++) {
        printf("Index value [%d][%d] = ", count_no1, count_no2);
        scanf("%d", &matrix_no1[count_no1][count_no2]);
      }
    }
    printf("\nEnter elements for 2nd matrix\n");

    for (int count_no1 = 0; count_no1 < rows_of_2; count_no1++) {
      for (int count_no2 = 0; count_no2 < columns_of_2; count_no2++) {
        printf("Index value [%d][%d] = ", count_no1, count_no2);
        scanf("%d", &matrix_no2[count_no1][count_no2]);
      }
    }

    int result[size][size];

    for (int count_no1 = 0; count_no1 < rows_of_1; count_no1++) {
      for (int count_no2 = 0; count_no2 < columns_of_2; count_no2++) {
        result[count_no1][count_no2] = 0;
        for (int count_no3 = 0; count_no3 < rows_of_1; count_no3++) {
          result[count_no1][count_no2] += matrix_no2[count_no1][count_no2] *
                                          matrix_no2[count_no2][count_no3];
        }
      }
    }

    printf("\nResult of Multiplication :\n\n");

    for (int count_no1 = 0; count_no1 < rows_of_1; count_no1++) {
      for (int count_no2 = 0; count_no2 < columns_of_2; count_no2++) {
        printf("%d   ", result[count_no1][count_no2]);
      }
      printf("\n");
    }
  }
  printf("\n");
  return 0;
}