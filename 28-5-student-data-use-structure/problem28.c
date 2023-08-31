#include <stdio.h>

struct Student {
  char name[50];
  int rollNumber;
  float percentage;
};

int main() {
  struct Student students[5];

  printf("Enter students details\n\n");

  for (int count = 0; count < 5; count++) {
    printf("Student no_%d : \n", count + 1);
    printf("Name : ");
    scanf("%s", students[count].name);

    printf("Roll Number : ");
    scanf("%d", &students[count].rollNumber);

    printf("Percentage : ");
    scanf("%f", &students[count].percentage);
    printf("\n");
  }
  printf("_____________________________");
  printf("\n\nStudent details : \n\n");

  for (int count = 0; count < 5; count++) {
    printf("Student no_%d\n\n", count + 1);

    printf("Name: %s\n", students[count].name);
    printf("Roll Number: %d\n", students[count].rollNumber);
    printf("Percentage: %f\n", students[count].percentage);
    printf("\n");
  }
  printf("\n");

  return 0;
}
