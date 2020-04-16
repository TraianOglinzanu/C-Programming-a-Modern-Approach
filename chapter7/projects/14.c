#include <stdio.h>
#include <math.h>

int main(){
	double x = 0.0;
	double y = 1.0;
	double z = 0.0;
	double division = 0.0;
	double average = 0.0;
		
	printf("Enter a positive number: ");
	scanf("%lf", &x);	

	while((fabs(z - y)) > (0.0001 * y)){
		division = (x / y);
		average = ((y + division) / 2);
		z = y;
		y = average;
	}
	
	printf("Square root: %.5f\n", average);
	return 0;
}
