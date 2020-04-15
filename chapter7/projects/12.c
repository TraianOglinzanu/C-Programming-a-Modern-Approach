#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	float number = 0;
	float total = 0;
	char ch;

	printf("Enter an expression: ");
	scanf("%f", &total);

	ch = getchar();

	while(ch != '\n'){
		switch(ch){
			case '+':
				scanf("%f", &number);
				total += number;
				break;

			case '*':
				scanf("%f", &number);
				total *= number;
				break;

			case '-':
				scanf("%f", &number);
				total -= number;
				break;

			case '/':
				scanf("%f", &number);
				total /= number;
				break;

			default:
				//putchar(ch);
				continue;
		}
	}

	printf("Value of expression: %f\n", total);
	return 0;
}
