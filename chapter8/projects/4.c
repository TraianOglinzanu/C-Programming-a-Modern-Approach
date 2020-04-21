#include <stdio.h>
#include <stdbool.h>

#define N 10

int main(int argc, char const *argv[])
{
	int digit;
	int values[N];
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while(n > 0) {
		digit = n % 10;
		values[digit]++;
		n /= 10;
	}
	
	for(int n = 0; n < 10; n++){
		if(values[n] > 1)
			printf("Repeated digit is %d\n", n);
	}
	return 0;
}
