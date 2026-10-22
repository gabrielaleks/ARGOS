// Author: HE-Arc

// Standard includes
#include <stdio.h>

void bubbleSort(int arr[], int size) {
    int temp;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubbleSortReverse(int arr[], int size) {
    int temp;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void clearBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

// Function definitions
int main(void) {
    // TODO: read 3 integers separated by commas, then print them in decreasing order
    int invalid = 1;

    int arr[3];
    while (invalid) {
        printf("Please enter 3 integers separated by commas: ");
        int result = scanf("%d , %d , %d", &arr[0], &arr[1], &arr[2]);

        if (result == 3) {
            invalid = 0;
        } else if (result == EOF) {
            break;
        }

        clearBuffer();
    }

    if (invalid) {
        print("Invalid!\n");
        return -1;
    }

    int arrSize = sizeof(arr) / sizeof(arr[0]);
    bubbleSortReverse(arr, arrSize);

    printf("The 3 integers sorted in decreasing order: %d, %d, %d\n", arr[0], arr[1], arr[2]);

    return 0;
}
