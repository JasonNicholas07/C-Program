// -----------------   count alphabets, digits, specials -------------

#include <stdio.h>
#include <ctype.h>   //lib for lowercase

int main () {
  //variable declaration
	char string[100];
	int countDigit = 0, countAlpha = 0, countSpecial = 0;

  //read user input
	printf("Input the string: ");
	scanf(" %[^\n]", string);
	
	//set all characters into lowercase
	for (int i = 0; string[i] != '\0'; i++){
		string[i] = tolower(string[i]);
	}

  //count
	for (int i = 0; string[i] != '\0'; i++){
		if (string[i] >= '0' && string[i] <= '9'){
			countDigit++;
		} else if (string[i] >= 'a' && string[i] <= 'z'){
			countAlpha++;
		} else {
			countSpecial++;
		}
	}
	
	//output
	printf("\nNumber of ALphabets in the string is: %d\n", countAlpha);
	printf("Number of Digits in the string is : %d\n", countDigit);
	printf("Number of Special characters in the string is: %d\n", countSpecial);
	
	return 0;
}
