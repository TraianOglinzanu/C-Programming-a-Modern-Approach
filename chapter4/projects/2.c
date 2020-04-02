#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number, reverse;

	printf("Enter a three-digit number: ");
	scanf("%d", &number);

	while(number!=0){
		int digit = number % 10;
		reverse = (reverse*10 + digit);
		number /= 10;
	}
	printf("The reversal is: %d\n", reverse);
	return 0;
}
