#include <stdio.h>

int main(int argc, char const *argv[])
{
	double loan, interest, payment;

	printf("Enter amount of loan: \n");
	scanf("%ld", &loan);
	printf("Enter interest rate: \n");
	scanf("%ld", &interest);
	printf("Enter monthly payment: \n");
	scanf("%ld", &payment);

	double month_interest = ((interest / 100)/12);

	loan *= loan * month_interest;
	loan -= month_interest;
	printf("Balance remaining after first payment: %ld\n", loan);

	loan *= loan * month_interest;
	loan -= month_interest;
	printf("Balance remaining after second payment: %ld\n", loan);

	loan *= loan * month_interest;
	loan -= month_interest;
	printf("Balance remaining after third payment: %ld\n", loan);

	return 0;
}
