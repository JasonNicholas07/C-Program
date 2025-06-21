//TOGGLE CASE OF SENTENCE
//Read a sentence and replace lowercase characters with uppercase and vice versa.

#include <stdio.h>
#include <ctype.h>

int main () {
	char string[50];      //variable declaration
	
	printf("Input the string: ");      //read user input
	scanf(" %[^\n]", string);
	
	printf("The given sentence is : %s\n", string);      //before changed
	
	for (int i = 0; string[i] != '\0'; i++){      //change case ()
		if (islower(string[i])){
			string[i] = toupper(string[i]);
		} else if (isupper(string[i])){
			string[i] = tolower(string[i]);
		}
	}
	
	printf("After case changed the string is: %s", string);
	
	
	return 0;
}
