#include <stdio.h>

int main(void)
{
    int base;
    int exp;
    int result = 1;

    printf("Enter base number: ");
    scanf("%d", &base);

    printf("Enter exponent number: ");
    scanf("%d", &exp);

    for (int i = 0; i < exp; i++) {
        result = result * base;
    }

    printf("Result: %d\n", result);

    return 0;
}
