#include <stdio.h>

int main(){
    float num1, num2;
    char op;//we took operators as charcters

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);  // note the space before %c to consume any leftover newline

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch(op) {
        case '+':
            printf("Result = %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Result = %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Result = %.2f\n", num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("Result = %.2f\n", num1 / num2);
            else
                printf("Cannot divide by zero\n");
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
