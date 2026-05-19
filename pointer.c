#include <stdio.h>

int main(void)
{
    int num = 42;
    //there is a fun fact for the number 42... I don't remember it. but there is a fun fact if you search it.
    int *p = &num;

    printf("Value: %d\n", num);
    printf("Address: %p\n", p);
    printf("Value via pointer: %d\n", *p);

    return 0;
}
