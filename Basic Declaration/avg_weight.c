//Calculate Average weight for purchases

#include <stdio.h>

int main() {
	double item1, item2, no_item1, no_item2, sum;
	
	printf("Weight - Item1: ");			//read input
	scanf("%lf", &item1);
	printf("No. of item1: ");
	scanf("%lf", &no_item1);
	
	printf("Weight - Item1: ");
	scanf("%lf", &item2);
	printf("No. of item2: ");
	scanf("%lf", &no_item2);
	
	sum = (item1*(float)no_item1) + (item2*(float)no_item2);  //calculate avg
	sum /= (no_item1 + no_item2);
	
	printf("\nAverage Value = %lf", sum);
	
	return 0;
}
