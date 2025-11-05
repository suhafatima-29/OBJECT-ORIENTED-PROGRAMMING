#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    result = (op == '+') ? (num1 + num2) :
             (op == '-') ? (num1 - num2) :
             (op == '*') ? (num1 * num2) :
             (op == '/') ? ((num2 != 0) ? (num1 / num2) : 0) :
             (op == '%') ? ((num2 != 0) ? ((int)num1 % (int)num2) : 0) : 0;

    if ((op == '/' || op == '%') && num2 == 0) 
	{
        printf("Error: Division by zero is not allowed.\n");
    } else if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%') 
	{
        printf("Error: Invalid operator.\n");
    } else 
	{
        printf("Result: %.2lf\n", result);
    }

    return 0;
}

