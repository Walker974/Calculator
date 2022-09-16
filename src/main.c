#include <stdio.h>

double addition(double a, double b) {
    return (a + b);
}
double substraction(double a, double b) {
    return (a - b);
}
double multiplication(double a, double b) {
    return (a * b);
}
double division(double a, double b) {
    return (a / b);
}
int main() {
    double first_Number, second_Number, result;
    char operator;

    printf("Enter a number:");
    scanf("%lf", &first_Number);
    printf("Enter operator:");
    scanf(" %c", &operator);
    printf("Enter a number:");
    scanf("%lf", &second_Number);

    if (operator == '+') {
        result = addition(first_Number, second_Number);
        printf("Result: %f", result);
    } else if (operator == '-') {
        result = substraction(first_Number, second_Number);
        printf("Result: %f", result);
    } else if (operator == '*') {
        result = multiplication(first_Number, second_Number);
        printf("Result: %f", result);
    } else if (operator == '/') {
        result = division(first_Number, second_Number);
        printf("Result: %f", result);
    } else {
        printf("Error! operator is not correct");
    }
    return 0;
}
