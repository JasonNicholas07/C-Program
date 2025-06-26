//add two numbers with pointers

#include <stdio.h>

int main () {
	int x, y;
	int *pX = &x;
	int *pY = &y;
												//for example
	printf("Input the first number: ");			//x = 2
	scanf("%d", &x);
	printf("Input the second number: ");		//y = 13
	scanf("%d", &y);
	
	printf("\nThe sum of the eneterd numbers is: %d\n", *pX + *pY);  //sum = 15
	
	
	
	return 0;
}
