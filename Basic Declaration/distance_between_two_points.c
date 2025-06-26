//calculate distance between two points

#include <stdio.h>
#include <math.h>

int main () {
	int x1, y1, x2, y2;			//variable
	double x, y, distance;
	
	printf("Input x1: ");		//read input
	scanf("%d", &x1);
	printf("Input y1: ");
	scanf("%d", &y1);
	printf("Input x2: ");
	scanf("%d", &x2);
	printf("Input y2: ");
	scanf("%d", &y2);
	
	x = abs(x1 - x2);		//calculate the distance
	y = abs(y1 - y2);
	
	distance = sqrt(pow(x,2) + pow(y,2));		//pythagoras theorem
	printf("\nDistance between the said points: %.4lf\n", distance);  //output
	
	return 0;
}
