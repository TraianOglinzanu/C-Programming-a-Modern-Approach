#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num1, denom1, num2, denom2, result_num, result_denom;
	char sign;

	printf("Enter two fractions separated by multiplication,division, addition, or substraction sign: ");

	scanf("%d/%d %c %d/%d", &num1,&denom1,&sign,&num2,&denom2);

	switch(sign){
		case '*':
			result_num = num1 * num2;
			result_denom = denom1 * denom2;
			break;

		case '/':
			result_num = num1 * denom2;
			result_denom = num2 * denom1;
			break;

		case '+':
			result_num = num1 * denom2 + num2 * denom1;
			result_denom = denom1 * denom2;
			break;

		case '-':
			result_num = num1 * denom2 - num2 * denom1;
			result_denom = denom1 * denom2;
			break;
	}

	printf("The sum is %d/%d\n", result_num, result_denom);
	return 0;
}
