#include <stdio.h>

int main(int argc, char const *argv[])
{
	double income;

	printf("Enter income: ");
	scanf("%lf", &income);

	if(income < 750){
		printf("Amount of tax: %.2lf\n", (income * 0.01));
	}else if(income >= 750 && income < 2250){
		printf("Amoung of tax: %.2lf\n", 7.50 + (income * 0.02));
	}else if(income >= 2250 && income < 3750){
		printf("Amount of tax: %.2lf\n", 37.50 + (income * 0.03));
	}else if(income >= 3750 && income < 5250){
		printf("Amount of tax: %.2lf\n", 82.50 + (income * 0.04));
	}else if(income >= 5250 && income < 7000){
		printf("Amount of tax: %.2lf\n", 142.50 + (income * 0.05));
	}else{
		printf("Amount of tax: %.2lf\n", 230.00 + (income * 0.06));
	}
	
	return 0;
}
