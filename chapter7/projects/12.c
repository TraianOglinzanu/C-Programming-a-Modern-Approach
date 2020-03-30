#include <stdio.h>

int main(int argc, char const *argv[])
{
	float number;
	float total;
	char ch;

	printf("Enter an expression: \n");
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

			default:
				//printf("Invalid\n");
				continue;
		}
	}

	printf("Value of expression: %f\n", total);
	return 0;
}
