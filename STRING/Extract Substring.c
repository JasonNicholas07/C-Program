//Extract Substring

#include <stdio.h>

int main () {
	int start, end;
	char string[50];		//variable declaration
	
	printf("Input the string: ");		//read user input
	scanf(" %[^\n]", string);
	
	printf("Input the position to start extraction: ");  //extract
	scanf("%d", &start); getchar();
	printf("Input the length of the substring: ");
	scanf("%d", &end); getchar();
	
	printf("\nThe substring retrieve from the string is: \"");
	for (int i = start-1; i < start + end - 1; i++){		//output
		printf("%c", string[i]);
	}
	printf("\"\n");
	
	
	return 0;
}
