#include <stdio.h>

int main(int argc, char const *argv[])
{
	double n;
	double sum = 0;

	printf("This program sums a series of integers. \n");
	printf("Enter integer (0 to terminate): ");

	scanf("%lf",&n);
	while(n != 0){
		sum += n;
		scanf("%lf", &n);
	}

	printf("The sum is: %lf\n", sum);

	return 0;
}
