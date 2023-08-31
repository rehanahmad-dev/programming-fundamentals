#include <stdio.h>

int main() {
  FILE *file = fopen("hello-world.bin", "wb");
  if (file == NULL) {
    printf("Error opening file.\n");
    return 1;
  }
  fprintf(file, "Hello World!");
  fclose(file);

  file = fopen("hello-world.bin", "rb");
  if (file == NULL) {
    printf("Error opening file.\n");
    return 1;
  }
  char buffer[100];
  fgets(buffer, sizeof(buffer), file);
  fclose(file);

  printf("\nContent of the file : %s \n\n", buffer);

  return 0;
}
