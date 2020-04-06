#include <stdio.h>

int main(int argc, char const *argv[])
{
	int gcd = 0;
	int first, second, count;

	printf("Enter two integers: \n");
	scanf("%d %d", &first, &second);


	for(count = 1; count <= first && count <= second; count++){
		if((first%count == 0)&&(second%count==0)){
			gcd = count;
		}
	}

	printf("Greatest common divisor is: %d\n", gcd);
	return 0;
}
