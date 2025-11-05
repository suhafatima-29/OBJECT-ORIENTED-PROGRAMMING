#include <stdio.h>

int main() {
    int year, count = 0, nextYear;
    
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0) 
	{
        if (year % 100 == 0) 
		{
            if (year % 400 == 0) 
			{
                printf("%d is a leap year.\n", year);
            } else 
			{
                printf("%d is not a leap year.\n", year);
            }
        } else 
		{
            printf("%d is a leap year.\n", year);
        }
    } else 
	{
        printf("%d is not a leap year.\n", year);
    }

    if (!((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) 
	{
        printf("The next 5 leap years are: ");
        nextYear = year + 1;
        while (count < 5) 
		{
            if ((nextYear % 4 == 0 && nextYear % 100 != 0) || (nextYear % 400 == 0)) 
			{
                printf("%d ", nextYear);
                count++;
            }
            nextYear++;
        }
        printf("\n");
    }

    return 0;
}

