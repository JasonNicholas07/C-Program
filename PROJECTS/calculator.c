/*******************************************************************************************										
*																						                           
*	SIMPLE CALCULATORS IN C																   
*	Features	: Continuous count, count decimals										   
* 	Operators	: '+', '-', '*', '/', '%', '^'											   
* 			addition, substraction, multiplication, distribution, modulus, power		   
*																						   
*																						   
*******************************************************************************************/


//LIBRARY
#include <stdio.h>
#include <math.h>

//FUNCTION DECLARATION
double calc(double num1, char op, double num2);
void nextCalc(char a, double temp);


//MAIN FUNCTION
int main () {
	char op, c;
	double x, y, temp, result;
	
	printf("CALCULATOR PROGRAM\n");
	
	printf("Input: ");							//input
	scanf("%lf %c %lf", &x, &op, &y);	getchar();
	
	result = calc(x, op, y);
	printf("Result : %.2lf\n", result);		//output
	temp = result;
	
	printf("Continue? (y/n):");
	scanf("%c", &c); getchar();
	
	nextCalc(c, temp);			//nextCalc function call for continuous counting

	return 0;
}

//CALCULATOR FUNCTION
double calc(double num1, char op, double num2){
    switch(op){
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '/': return num2 != 0 ? num1 / num2 : 0; 		// prevent divide by zero
        case 'x': case '*': return num1 * num2;
        case '%': return (int)num1% (int)num2;
        case '^': return pow(num1, num2);
        default: printf("Unknown operator: %c\n", op); return 0;
    }
    
}


//CONTINUOUS COUNT FUNCTION
void nextCalc(char a, double temp){
	double result, y;
	char op;
	
	while (a == 'y'){ 			//while loop
		result = 0;
		printf("Display: %.2lf", temp);
		scanf("%c %lf", &op, &y); getchar();
		
		result = calc(temp, op, y);
		temp = result;
		
		printf("Result : %.2lf\n", result);
		
		printf("Continue? (y/n):");
		scanf("%c", &a);getchar();
	}		
}
