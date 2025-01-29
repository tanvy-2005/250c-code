#include <stdio.h>

int main() {
    int marks, grade;

    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks! Please enter a number between 0 and 100.\n");
        return 0;
    }

    grade = marks / 10;

    switch (grade) {
        case 10: // For marks 100
        case 9:// For marks 90-99
            printf("Grade: A\n");
            break;
        case 8:  // For marks 80-89
            printf("Grade: B\n");
            break;
        case 7:  // For marks 70-79
            printf("Grade: C\n");
            break;
        case 6:  // For marks 60-69
            printf("Grade: D\n");
            break;
        case 5:  // For marks 50-59
        case 4:  // For marks 40-49
            printf("Grade: E\n");
            break;
        default: // For marks below 40
            printf("Grade: F (Fail)\n");
            break;
    }

    return 0;
}