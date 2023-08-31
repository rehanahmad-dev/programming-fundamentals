#include <stdio.h>
#include <stdlib.h>

int main() {
  int size;

  printf("Enter the size of the array : ");
  scanf("%d", &size);
  printf("\n");

  int* array = (int *)malloc(size * sizeof(int));

  for (int count = 0; count < size; count++) {
    array[count] = rand() % 100;
  }

  printf("Array elements: \n");
  for (int count = 0; count < size; count++) {
    printf("%d ", array[count]);
  }

  int my_number;

  printf("\n\nEnter number to search : ");
  scanf("%d", &my_number);
  printf("\n");

  int exist;

  for (int count = 0; count < size; count++) {
    if (array[count] == my_number) {
      exist = 1;
      break;
    }
  }

  if (exist) {
    printf("%d exist.\n\n", my_number);
  } else {
    printf("%d  not exist.\n\n", my_number);
  }

  free(array);

  return 0;
}