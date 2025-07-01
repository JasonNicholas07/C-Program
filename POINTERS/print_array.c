/******************************	
*	POINTERS 
*
*	Print array using pointer
*
*
******************************/

#include <stdio.h>
#include <stdlib.h>

int main () {
	int size, i;		//variable
	
	printf("Input the number of elements to store in the array: ");
	scanf("%d", &size);			//input array size
	
	int *myNum = (int *) malloc(size * sizeof(int));		//allocate memory
	if (myNum == NULL){
		printf("Memory allocation failed\n");
		return 1;
	}
	
	for (i = 0; i<size; i++){				//input
		printf("element - %d: ", i);
		scanf("%d", myNum + i);
	}
	
	printf("\nThe elements you entered are:\n");		//output
	for (i = 0; i<size; i++){
		printf("element - %d: %d\n", i, *(myNum + i));
	}
	
	
	
	free(myNum);		//free memory
	return 0;
}
