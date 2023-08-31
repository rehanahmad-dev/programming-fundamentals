#include <stdio.h>

int main() {

    FILE *file = fopen("hello-world.txt", "w");
    fprintf(file, "Hello World!\n\n");
    fclose(file);
    
    // Open the file in read mode and display its content
    file = fopen("hello-world.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    
    printf("\nContent of file : ");
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    
    fclose(file);
    
    return 0;
}
