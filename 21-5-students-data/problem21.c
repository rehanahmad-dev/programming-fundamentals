#include <stdio.h>

int main() {
  int roll_numbers[5];
  char name[5][30];
  float percentage[5];

  printf("Enter data of 5 students\n\n");

  for (int count = 0; count < 5; count++) {
    printf("Student_no_%d\n", count + 1);

    printf("Roll Number: ");
    scanf("%d", &roll_numbers[count]);

    printf("Name: ");
    scanf("%s", name[count]);

    printf("Percentage: ");
    scanf("%f", &percentage[count]);
    printf("\n");
  }
  printf("\nRoll_no\tName\tPercentage\n");

  for (int count = 0; count < 5; count++) {
    printf("%d\t", roll_numbers[count]);
    printf("%s\t", name[count]);
    printf("%f\t\n", percentage[count]);
    printf("\n");
  }
  return 0;
}
