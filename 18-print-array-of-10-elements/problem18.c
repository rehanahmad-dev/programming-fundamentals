#include <stdio.h>

int main()

{
  int my_number[10];

    printf("Enter 10 numbers\n\n");

  for(int count = 0; count < 10; count++){
    printf("Enter element no_%d : ",count+1);
    scanf("%d", &my_number[count]);
  }

    printf("\nArray : ");

  for (int count = 0; count < 10; count++)
  {
    printf("%d ", my_number[count]);
  }
  printf("\n\n");

  return 0;
}