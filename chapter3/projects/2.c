#include <stdio.h>

int main(int argc, char const *argv[])
{
	int item, month, day, year;
	double price;

	printf("Enter item number: \n");
	scanf("%d", &item);
	printf("Enter unit price: \n");
	scanf("%lf", &price);
	printf("Enter a date (mm/dd/yyyy): \n");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("Item      Unit      Purchase\n");
	printf("          Price     Date\n");
	printf("%d       $%.2lf    %d/%d/%d\n", item, price, month, day, year);
	return 0;
}
