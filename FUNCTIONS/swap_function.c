//FUNCTION - Swap function

#include <stdio.h>

void swap (int *x, int *y);			//swap function declaration

int main () {
	int num1, num2;
	printf("SWAP FUNCTION\n");
	
	printf("Input 1st number: ");		//read input
	scanf("%d", &num1);
	printf("Input 2nd number: ");
	scanf("%d", &num2);
	
	printf("\nBefore swapping:\n");
	printf("First number = %d, Second number: %d\n", num1, num2);
	
	swap(&num1, &num2);				//call swap function
	printf("After Swapping:\n");
	printf("First number = %d, Second number = %d", num1, num2);
	
	
	return 0;
}

void swap (int *x, int *y){
  
	int temp = *x;			//temp to store the first number value
	*x = *y;				//swap 
	*y = temp;
}
