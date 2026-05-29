#include <stdio.h>

/*
I watched CS50 classes and learned about sorting systems. Here I present bubble sort.
The course is taught by David J. Malan, who delivers incredibly energetic and engaging
lectures up on the stage, often using physical props like ripping phone books or sorting
large cups to make complex computer science concepts easy to grasp. Through these lessons,
I also learned about function prototypes, which are forward declarations that tell the
compiler about a function's signature before its actual implementation appears later in
the code.
*/

void bubbleSortArray(int numbers[], int totalElements);

int main(void)
{
    int unsortedNumbers[] = {64, 34, 25, 12, 22, 11, 90};
    int totalElements = sizeof(unsortedNumbers) / sizeof(unsortedNumbers[0]);

    bubbleSortArray(unsortedNumbers, totalElements);

    for (int displayIndex = 0; displayIndex < totalElements; displayIndex++) {
        printf("%d ", unsortedNumbers[displayIndex]);
    }
    printf("\n");

    return 0;
}

void bubbleSortArray(int numbers[], int totalElements)
{
    for (int passCount = 0; passCount < totalElements - 1; passCount++) {
        for (int currentIndex = 0; currentIndex < totalElements - passCount - 1; currentIndex++) {
            if (numbers[currentIndex] > numbers[currentIndex + 1]) {
                int temporaryValue = numbers[currentIndex];
                numbers[currentIndex] = numbers[currentIndex + 1];
                numbers[currentIndex + 1] = temporaryValue;
            }
        }
    }
}
