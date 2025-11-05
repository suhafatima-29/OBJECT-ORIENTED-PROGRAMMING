#include <stdio.h>

int main() {
    int marks[5];
    int i, failCount = 0;
    float total = 0, percentage;
    char grade;

    for(i = 0; i < 5; i++) 
	{
        printf("Enter marks for subject %d (out of 100): ", i+1);
        scanf("%d", &marks[i]);
        if(marks[i] < 35) 
		{ 
            failCount++;
        }
        total += marks[i];
    }

    percentage = total / 5;

    if(failCount > 1) 
	{
        printf("Repeat Year\n");
    } else {
     
        if(percentage >= 90) 
		{
            grade = 'A';
        } 
		else if(percentage >= 75) 
		{
            grade = 'B';
        } 
		else if(percentage >= 60) 
		{
            grade = 'C';
        } 
		else if(percentage >= 50) 
		{
            grade = 'D';
        } else 
		{
            grade = 'F';
        }

        printf("Percentage: %.2f%%\n", percentage);
        printf("Grade: %c\n", grade);

        if(failCount == 1) 
		{
            printf("You need to clear the failed subject.\n");
        }
    }

    return 0;
}

