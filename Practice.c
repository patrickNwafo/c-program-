#include <stdio.h>

int main()
{

    // const double PI = 3.14159;
    // double radius;
    // double circumference;
    // double area;

    // printf("\n Enter the radius of a circle: ");
    // scanf("%lf", &radius);

    // circumference = 2 * PI * radius;
    // area = PI * radius * radius;

    // printf("\ncircumference: %lf", circumference);
    // printf("\n area %lf", area);
    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator (+ - * /): ");
    scanf("%c", &operator);

    printf("\nEnter number 1: ");
    scanf("%lf", &num1);

    printf("\nEnter number 2: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("\nresult: %lf", result);
        break;

    case '-':
        result = num1 - num2;
        printf("\nresult: %lf", result);

    case '*':
        result = num1 * num2;
        printf("\nresult: %lf", result);

    case '/':
        result = num1 / num2;
        printf("\nresult: %lf", result);
    default:
        printf("%c is not valid", operator);
    }

    return 0;
}