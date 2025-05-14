#include <stdio.h>
float add(int a, int b);
float subtract(int a, int b);
float multiply(int a, int b);
float divide(int a, int b);
int main() 
{
    int num1, num2;
    float result;
    char operator;
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter second integer: ");
    scanf("%d", &num2);

    switch (operator) 
    {
        case '+':
            result = add(num1, num2);
            printf("%d + %d = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = subtract(num1, num2);
            printf("%d - %d = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = multiply(num1, num2);
            printf("%d * %d = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) 
            {
                result = divide(num1, num2);
                printf("%d / %d = %.2f\n", num1, num2, result);
            } else 
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}

float add(int a, int b) 
{
    return (float)(a + b);
}

float subtract(int a, int b) 
{
    return (float)(a - b);
}

float multiply(int a, int b) 
{
    return (float)(a * b);
}

float divide(int a, int b) 
{
    return (float)a / b;
}