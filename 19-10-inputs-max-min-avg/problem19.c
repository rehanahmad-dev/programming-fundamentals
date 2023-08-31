#include <stdio.h>

int main() {
  int array[10];


  printf("Enter 10 numbers\n\n");

  for (int count = 0; count < 10; count++)
  {
    printf("Enter element no_%d : ",count+1);
    scanf("%d", &array[count]);
  }

  int max, min;

  max = array[0];
  min = array[0];

  for (int count = 1; count < 10; count++) {
    if (array[count] > max) {
      max = array[count];
    }

    if (array[count] < min) {
      min = array[count];
    }
  }

  printf("\nMaximum  = %d\n", max);
  printf("Minimum  = %d\n", min);
  int sum = 0;
  for (int count = 0; count < 10; count++) {
    sum += array[count];
  }
  float avg;
  avg = sum / 10;

  printf("Average = %f\n\n", avg);

  return 0;
}