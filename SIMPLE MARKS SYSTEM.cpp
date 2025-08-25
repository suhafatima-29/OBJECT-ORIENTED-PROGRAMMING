#include <stdio.h>

int main() {
    int marks[5], i, total = 0;
    float average, percentage;
    char grade;

    printf("Enter marks of 5 subjects (out of 100):\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    // Assign grade based on percentage
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 50)
        grade = 'C';
    else if (percentage >= 35)
        grade = 'D';
    else
        grade = 'F';

    printf("\n----- Result -----\n");
    printf("Total Marks   = %d / 500\n", total);
    printf("Average Marks = %.2f\n", average);
    printf("Percentage    = %.2f%%\n", percentage);
    printf("Grade         = %c\n", grade);

    return 0;
}

