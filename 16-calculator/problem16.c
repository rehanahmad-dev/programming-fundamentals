#include <stdio.h>

int main() {
  int first_number, second_number;
  char ch;

  printf("Enter operation ( /,*,+,-) : ");
  scanf("%c", &ch);
  printf("\n");

  printf("Enter 1st number : ");
  scanf("%d", &first_number);

  printf("Enter 2nd number : ");
  scanf("%d", &second_number);
  printf("\n");

  switch (ch) {
    case '/':
      printf("Division = %d ", first_number / second_number);
      break;

    case '*':
      printf("Multiplication = %d ", first_number * second_number);
      break;

    case '+':
      printf("Addition = %d ", first_number + second_number);
      break;

    case '-':
      printf("Subbraction = %d ", first_number - second_number);
      break;
  }
  printf("\n\n");

  return 0;
}
