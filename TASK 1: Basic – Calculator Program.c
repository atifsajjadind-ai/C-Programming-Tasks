
#include <stdio.h>

int main()
{
    float a, b;
    char op;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &b);

    switch (op)
    {
        case '+':
            printf("Addition = %.2f", a + b);
            break;

        case '-':
            printf("Subtraction = %.2f", a - b);
            break;

        case '*':
            printf("Multiplication = %.2f", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Division = %.2f", a / b);
            else
                printf("Division by zero is not allowed.");
            break;

        default:
            printf("Invalid operator!");
    }

    return 0;
}
