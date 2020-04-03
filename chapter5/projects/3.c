#include <stdio.h>

int main(int argc, char const *argv[])
{
	float commission, value, rival_commission;
	float shares, price;

	printf("Enter the number of shares and the price-per-share: ");
	scanf("%f %f", &shares, &price);

	value = (shares * price);

	/* Rival Broker */

	if(shares < 2000){
		rival_commission = 33.00f + 0.03f * value;
	}else{
		rival_commission = 33.00f + 0.02f * value;
	}

	if (value < 250.00f)
		commission = 30.00f + .017f * value;
	else if (value < 6250.00f)
		commission = 56.00f + .0066f * value;
	else if (value < 20000.00f)
		commission = 76.00f + .0034f * value;
	else if (value < 50000.00f)
		commission = 100.00f + .0022f * value;
	else if (value < 500000.00f)
		commission = 255.00f + .0009f * value;

	printf("Commission: $%.2f\n", commission);
	printf("Rival Commission: $%.2f\n", rival_commission);
	
	return 0;
}
