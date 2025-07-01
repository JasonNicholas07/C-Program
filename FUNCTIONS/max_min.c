/******************************	
*	FUNCTIONS 
*
*	Max & Min in array
*
*
******************************/


#include <stdio.h>			//library
#include <stdlib.h>

int maxF(int *array, int size);				//function
int minF(int *array, int size);

//MAIN function
int main () {
	int size, max, min, i; 		//variable declaration
	
	printf("Input array size: ");		//input size
	scanf("%d", &size);
	
	int *myNum = (int *) malloc(size * sizeof(int));		//allocate memory
	if (myNum == NULL){
		printf("Memory allocation failed!\n");
		return 1;
	}
	
	printf("\nInput %d values\n", size);
	for (i = 0; i<size; i++){			//input array element 
		printf("Number - #%d: ", i+1);
		scanf("%d", myNum + i);
	}
	
	max = maxF(myNum, size);			//function call
	min = minF(myNum, size);
	
	printf("\nMinimum value: %d\n", min);		//output
	printf("Maximum value: %d\n", max);
	
	
	free(myNum);			//free memory
	return 0;	
}

//MAX function
int maxF(int *array, int size){
	int max = *array;
	
	for (int i = 0; i<size; i++){
		if (*(array+i) > max){
			max = *(array+i);
		}
	}
	
	return max;
}

//MIN function
int minF(int *array, int size){
	int min = *array;
	
	for (int i = 0; i<size; i++){
		if (*(array + i) < min){
			min = *(array+i);
		}
	}
	
	return min;
}
