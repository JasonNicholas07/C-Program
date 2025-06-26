//basic pointer declaration

#include <stdio.h>

int main () {
	int x = 10;
	int *pX = &x;		//pointer = hold the memory address of variable 'x'
	
	printf("The basic declaration of pointer\n");
	
	printf("\nValue of x: %d\n", x);
	printf("pX stores the address of x: %p\n", pX);
	printf("*pX stores the value of x: %d\n", *pX);   //dereference
	printf("&x is the address of x: %p\n", &x);
	
	
	return 0;
}
