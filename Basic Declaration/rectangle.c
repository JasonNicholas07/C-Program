//Compute rectangle perimeter and area

#include <stdio.h>

int main () {
	int height = 7, width = 5;
	
	printf("RECTANGLE\n");
	printf("Height = %d m\n", height);
	printf("Width = %d m\n", width);
	
	printf("\nPerimeter: %d m\n", (height+width)*2);
	printf("Area = %d m^2\n", height*width);
	
	
	return 0;
}
