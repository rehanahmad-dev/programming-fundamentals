#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float percentage;
};

int main() {
    struct Student students[5];

    printf("Enter details for 5 students:\n\n");
    for (int count = 0 ; count < 5 ; count++) {
        printf("Student %d:\n", count + 1);
        printf("Name: ");
        scanf("%s", students[count].name);
        printf("Roll Number: ");
        scanf("%d", &students[count].rollNumber);
        printf("Percentage: ");
        scanf("%f", &students[count].percentage);
        printf("\n");
    }

    FILE *file = fopen("student-details.txt", "w");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    for (int count = 0 ; count < 5 ; count++) {
        fprintf(file, "%s %d %f\n", students[count].name, students[count].rollNumber, students[count].percentage);
    }

    fclose(file);

    file = fopen("student-details.txt", "r");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("_________________________________");
    printf("\n\nStudent details :\n\n");
    for (int count = 0 ; count < 5 ; count++) {
        fscanf(file, "%s %d %f", students[count].name, &students[count].rollNumber, &students[count].percentage);
        printf("Student %d:\n", count + 1);
        printf("Name: %s\n", students[count].name);
        printf("Roll Number: %d\n", students[count].rollNumber);
        printf("Percentage: %f\n", students[count].percentage);
        printf("\n");
    }

    fclose(file);

    return 0;
}
