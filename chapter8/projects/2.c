#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
	int digit;
	int values[10] = {0};
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while(n > 0) {
		digit = n % 10;
		values[digit]++;
		n /= 10;
	}
	printf("Digits: \t");
	for(int i = 0; i < 10; i++){
		printf("%d\t", i);
	}
	printf(" \n");
	printf("Occurences: \t");
	for(n = 0; n < 10; n++){
		
		printf("%d\t", values[n]);
	}
	return 0;
}
