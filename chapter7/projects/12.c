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
			case '+' :
				total += number;
				ch = getchar();
				break;

			case '*' :
				total *= number;
				ch = getchar();
				break;

			default:
				printf("Invalid\n");
				continue;
		}
	}

	printf("Value of expression: %f\n", total);
	return 0;
}
