//remove non-alphabets

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
	char string[50];
	
	printf("REMOVE NON ALPHABETS STRING PROGRAM\n");
	printf("Input the string: ");
	scanf(" %[^\n]", string);
	
	int length = strlen(string);
	
	//lower case
	for (int i = 0; i<length; i++){
		string[i] = tolower(string[i]);
	}
	
	//remove non alphabets
	for (int i = 0; i<length; i++){
		if (string[i] < 'a' || string[i] > 'z'){
			for (int j = i; j<length; j++){
				string[j] = string[j+1];
			} 
		}
	}
	
	printf("After removing: %s\n", string);
	
	return 0;
}


