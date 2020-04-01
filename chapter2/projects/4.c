#include <stdio.h>

int main(int argc, char const *argv[])
{
	double amount;

	printf("Enter an amount: \n");
	scanf("%lf", &amount);

	double tax_amount = (amount + (amount * 0.05));

	printf("With tax added: $%.2lf\n", tax_amount);
	return 0;
}
