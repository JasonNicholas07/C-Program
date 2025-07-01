#include <stdio.h>
#include <stdlib.h>

void qSort(int *array, int low, int high);
int partition(int *array, int low, int high);

int main () {
    int size, i;
    
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &size);
    
    int *myNum = (int *) malloc(size * sizeof(int));
    if (myNum == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    for (i = 0; i < size; i++) {
        printf("element - %d: ", i);
        scanf("%d", myNum + i);
    }
    
    qSort(myNum, 0, size - 1);
    
    printf("\nSorted elements:\n");
    for (i = 0; i < size; i++) {
        printf("element - %d: %d\n", i, *(myNum + i));
    }
    
    free(myNum);
    return 0;
}

void qSort(int *array, int low, int high) {
    if (low < high) {
        int pivot_index = partition(array, low, high);
        qSort(array, low, pivot_index - 1);
        qSort(array, pivot_index + 1, high);
    }
}

int partition(int *array, int low, int high) {
    int pivot = *(array + high);
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (*(array + j) <= pivot) {
            i++;
            int temp = *(array + i);
            *(array + i) = *(array + j);
            *(array + j) = temp;
        }
    }

    int temp = *(array + (i + 1));
    *(array + (i + 1)) = *(array + high);
    *(array + high) = temp;

    return i + 1;
}
