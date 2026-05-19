#include <stdio.h>

int main(void) 
{
    int num;

    printf("Enter any whole number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is an EVEN number.\n", num);
    } else {
        printf("%d is an ODD number.\n", num);
    }

    return 0;
}
