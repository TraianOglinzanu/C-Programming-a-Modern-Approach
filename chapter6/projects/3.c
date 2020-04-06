#include <stdio.h>

int main(int argc, char const *argv[])
{
	int gcd = 0;
	int first, second, count;

	printf("Enter two integers: ");
	scanf("%d/%d", &first, &second);


	for(count = 1; count <= first && count <= second; count++){
		if((first%count == 0)&&(second%count==0)){
			gcd = count;
		}
	}
	int a = (first / gcd);
	int b = (second / gcd);

	printf("In lowest terms: %d/%d\n",a,b);
	return 0;
}
