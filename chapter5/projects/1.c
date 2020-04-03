#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number;
	int count = 0;

	printf("Enter number: ");
	scanf("%d", &number);

	int a = number;

	while(number != 0){
		number /= 10;
		count++;
	}

	printf("The number %d has %d digits \n", a, count);
	return 0;
}
