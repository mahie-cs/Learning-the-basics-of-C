#include <stdio.h>

int main(void)
{
    float a;
    float b;
    float result;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    if (b == 0.0f) {
        printf("Error: Division by zero\n");
        return 1;
    }

    result = a / b;

    printf("Result: %f\n", result);

    return 0;
}
