#include <stdio.h>

int main  () {
  char string[100];      //string declaration
	
	printf("Input your name: ");
	scanf(" %[^\n]", string);      //read user input
	
	printf("\nWelcome, %s.\n", string);      //output
	printf("Happy Coding!");


  return 0;
}
