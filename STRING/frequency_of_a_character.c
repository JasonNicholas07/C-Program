//Frequency of a character

#include <stdio.h>

int main () {
	char string[50], c;   //string variable
	int countFreq = 0;    //set counter variable to 0
	
	printf("FREQUENCY OF A CHARACTER PROGRAM\n");
	printf("Input the string: ");            //read input
	scanf(" %[^\n]", string); getchar();
	printf("Input the character to find frequency: ");
	scanf("%c", &c); getchar();
	
	for (int i = 0; string[i] != '\0'; i++){      //loop for each character inside the string
		if (string[i] == c){        //if character inside the string matches the requested character
			countFreq++;              //increase the counter by one
		}
	}
	
	printf("\nThe frequency of %c is : %d\n", c, countFreq);  //print output
	
	
	
	return 0;
}
