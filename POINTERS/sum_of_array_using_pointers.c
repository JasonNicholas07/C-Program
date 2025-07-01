//Sum of array

#include <stdio.h>
#include <stdlib.h>

int main () {
	int size, sum = 0; 
	
	printf("Input array size: ");
	scanf("%d", &size);
	
	int *array = (int *) malloc(size * sizeof(int));		//allocate memory
	if (array == NULL){
		printf("Memory allocation failed!\n");
		return 1;
	}
	
	for (int i = 0; i<size; i++){
		printf("Element - %d: ", i+1);
		scanf("%d", array+i);				//read input
	}
	
	for (int i = 0; i<size; i++){
		sum += *(array + i);				//calculate sum
	}
	
	printf("\nThe sum of array is: %d\n", sum);  //output
	
	
	
	free(array);	//free memory
	return 0;
}
