//FUNCTION - Square function program

#include <stdio.h>

int squareCalc (int num);			//square function declaration

//main function
int main () {
	int num;		//variable declaration
	
	printf("Input number: ");		//read input
	scanf("%d", &num);
	
	float result = (float)squareCalc(num);		//calculate
	printf("\nThe square of %d is : %.2f\n", num, result);	//output
	
	
	return 0;
}

int squareCalc (int num){			//square function
	
	return num*num;
	
} 
