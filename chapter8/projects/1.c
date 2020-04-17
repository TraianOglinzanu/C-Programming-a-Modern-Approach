#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
	//bool digit_seen[10] = {false};
	int digit;
	int values[10] = {0};
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while(n > 0) {
		digit = n % 10;
		values[digit]++;
		//if (digit_seen[digit])
		//	break;
		//digit_seen[digit] = true;
		n /= 10;
	}
	
	for(int n = 0; n < 10; n++){
		if(values[n] > 1)
			printf("Repeated digit is %ld\n", n);
		
	}
	return 0;
}
