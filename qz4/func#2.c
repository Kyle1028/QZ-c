#include <stdio.h>

void swapArray(int* arr1, int* arr2, int size) {
    for (int i = 0; i < size; i++) {
        int temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
}

void printArray(int* arr, int size, char* name) {
    printf("%s = [", name);
    for (int i = 0; i < size; i++) {
        printf("%d", *(arr + i));
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int main() {
    int size = 10;
    int source[] = {0, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int dest[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    swapArray(source, dest, size);

    printArray(source, size, "after swap array, source array");
    printArray(dest, size, "after swap array, dest array");

    return 0;
}
