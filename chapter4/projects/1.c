#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number;

	printf("Enter a two-digit number: ");
	scanf("%d", &number);

	int first = number % 10;
	int second = (number /= 10);

	printf("The reversal is: %d%d\n", first,second);
	return 0;
}
