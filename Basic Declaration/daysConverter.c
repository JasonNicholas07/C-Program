//Convert days into years, weeks, and days

#include <stdio.h>

int main () {
	int days, years, weeks;
	
	printf("Number of days: ");		//read input
	scanf("%d", &days);
	
	years = days/365;
	weeks = (days%365) / 7;			//modulo operator to find remaining days
	days = days - (years*365) - (weeks*7);
	
	printf("\nYears: %d\n", years);
	printf("Weeks: %d\n", weeks);
	printf("Days: %d\n", days);
	
	return 0;
}
