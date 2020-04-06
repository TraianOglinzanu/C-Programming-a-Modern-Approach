#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number;
	int i = 2;

	printf("Enter number: \n");
	scanf("%d", &number);

	while(i*i <= number){
		printf("%d\n",i*i);
		i += 2;
	}
	return 0;
}
