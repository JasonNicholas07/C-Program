//Compute rectangle perimeter and area

#include <stdio.h>

int main () {
	int days;
	
	printf("Number of days: ");
	scanf("%d", &days);
	
	int years = days/365;
	int weeks = (days%365) / 7;
	days = days - (years*365) - (weeks*7);
	
	printf("\nYears: %d\n", years);
	printf("Weeks: %d\n", weeks);
	printf("Days: %d\n", days);
	
	return 0;
}
