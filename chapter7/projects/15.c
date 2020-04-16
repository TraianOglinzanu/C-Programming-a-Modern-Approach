#include <stdio.h>

int main(int argc, char const *argv[])
{
	int factorial = 1; 
	int integer;

	printf("Enter a positive integer: ");
	scanf("%d", &integer);

	for(int i = 1; i <= integer; i++){	
		factorial = (factorial * i);

	}
	printf("Factorial of %d: %d\n", integer, factorial);
	return 0;
}


// For a short, 7 is the largest possible value.
// For an int, 12 is the largest possible value.
// For a long, 20 is the largest possible value.
// For a float, 34 is the largest possible value.
// For a double, 170 is the largest possible value.
// For a long double, 1774 is the largest possible value.


