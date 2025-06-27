//check if two integers are multiples

#include <stdio.h>

int main () {
	int num1, num2;
	
	
	printf("Input the first number: ");
	scanf("%d", &num1);
	printf("Input the second number: ");
	scanf("%d", &num2);
	
	if(num2 % num1 == 0 || num1 % num2 == 0){
		printf("Multiplied!\n");
	} else {
		printf("Not multiplied!\n");
	}
	
	
	return 0;
}
