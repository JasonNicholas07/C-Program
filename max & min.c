//max and min (array) using functions -- dynamic array

#include <stdio.h>
#include <stdlib.h>

int findMax (int *array, int size);
int findMin (int *array, int size);

int main () {
	int size;
	
	printf("Input array size: ");
	scanf("%d", &size);
	
	int *myNum = (int *)malloc(size*sizeof(int));
	if (myNum == NULL){
		printf("Memory allocation failed!\n");
		return 1;
	}
	
	printf("\nInput array elements:\n");
	for (int i = 0; i<size; i++){
		printf("Elements - #%d: ", i+1);
		scanf("%d", myNum + i);
	}
	
	int max = findMax (myNum, size);
	int min = findMin (myNum, size);
	
	printf("\nMaximum value: %d\n", max);
	printf("Minimum value: %d\n", min);
	
	free(myNum);
	return 0;
}

int findMax (int *array, int size){
	int max = *array;
	
	for (int i = 0; i<size; i++){
		if (*(array + i) > max){
			max = *(array + i);
		}
	}
	
	return max;
}

int findMin (int *array, int size){
	int min = *(array);
	
	for (int i = 0; i<size; i++){
		if (*(array + i) < min){
			min = *(array + i);
		}
	}
	
	return min;
}
