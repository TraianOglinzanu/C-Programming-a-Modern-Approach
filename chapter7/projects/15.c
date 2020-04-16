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

