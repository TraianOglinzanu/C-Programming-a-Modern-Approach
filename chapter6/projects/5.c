#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number;
	int reverse = 0;

	printf("Enter a number: ");
	scanf("%d", &number);

	while(number != 0){
		int digit = number % 10;
		reverse = ((reverse * 10)+ digit);
		number /= 10;
	}
	printf("Number in reverse: %d\n", reverse);
	return 0;
}
