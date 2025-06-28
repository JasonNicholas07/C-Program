//FUNCTION - Largest in the array

#include <stdio.h>
#include <stdlib.h>

int max(int *array, int size);

int main () {
	//variable
	int size;
	
	//size input
	printf("Input the number of elements to be stored in the array: ");
	scanf("%d", &size);
	
	//allocate memory
	int *array = (int *) malloc(size * sizeof(int));
	if (array == NULL){
		printf("Memory allocation failed!\n");
		return 1;
	}
	
	//array element input
	for (int i = 0; i<size; i++){
		printf("Element - #%d: ", i);
		scanf("%d", array + i);
	}
	
	//output
	printf("\nThe largest element in the array is: %d\n", max(array, size));
	
	//free
	free (array);
	return 0;
} 

int max (int *array, int size){
	int largest = *array;
	
	for (int i = 0; i<size; i++){
		if (*(array + i) > largest){
			largest = *(array + i);
		}
		
	}
	
	return largest;
}
