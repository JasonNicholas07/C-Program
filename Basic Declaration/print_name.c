//Print Name

#include <stdio.h>

int main () {
	char name[50];      //variable
	
	printf("Input your name: ");    //read input
	scanf(" %[^\n]", name);
	
	printf("\n");
	printf("Welcome, %s!\n", name);    //print output
	printf("Good morning.\n");
	
	
	
	return 0;
}
