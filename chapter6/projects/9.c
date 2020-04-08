#include <stdio.h>

int main(int argc, char const *argv[])
{
	double loan, interest, payment, num_of_pay;

	printf("Enter amount of loan: \n");
	scanf("%ld", &loan);

	printf("Enter interest rate: \n");
	scanf("%ld", &interest);

	printf("Enter monthly payment: \n");
	scanf("%ld", &payment);

	printf("Enter number of payments: \n");
	scanf("%ld", &num_of_pay)l

	double month_interest = ((interest / 100)/12);

	for(int i = 1; i <= num_of_pay; i++){
		
		loan *= loan * month_interest;
		loan -= month_interest;
		printf("Balance remaining after first payment: %ld\n", loan);
	}
	return 0;
}
