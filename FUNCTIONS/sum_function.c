//sum function

#include <stdio.h>

int sum (int x, int y);				//sum func declaration

int main (){
	int num1, num2, result;				//variable
	
	printf("Input first number: ");		//read input
	scanf("%d", &num1);
	printf("Input second number: ");
	scanf("%d", &num2);
	
	result = sum(num1, num2);			//call sum function
	printf("Result : %d\n", result);	//output
		
	return 0;
}


int sum (int x, int y){				//sum function
	
	return x + y;
}
