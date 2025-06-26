#include <stdio.h>
#include <string.h> 

// sort function
void bubbleSort(char str[][100], int size);

// main function
int main() {
	
    int size;

    printf("How many words? ");
    scanf("%d", &size);

    char str[size][100];

    // Clear the input buffer
    while (getchar() != '\n'); 
    
    // Read user input
    printf("\nInput %d string(s):\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%99s", str[i]); // Use %99s to prevent buffer overflow
    }

    bubbleSort(str, size);

    printf("\nThe strings appear after sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}

void bubbleSort(char str[][100], int size) {
    char temp[100]; 

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (strcmp(str[j], str[j + 1]) > 0) {
                strcpy(temp, str[j]);      // Copy str[j] to temp
                strcpy(str[j], str[j + 1]); // Copy str[j+1] to str[j]
                strcpy(str[j + 1], temp);  // Copy temp to str[j+1]
            }
        }
    }
}
