#include <stdio.h>

int main(int argc, char const *argv[])
{
	double number = 0;
	double top_number = 0;

	for(;;){

		printf("Enter a number\n");
		scanf("%lf", &number);

		if(number == 0){
			break;

		}else{
			if(number > top_number){
				top_number = number; 
			}
		}
	}
	printf("The largest number entered was: %.2lf", top_number);

	return 0;
}
