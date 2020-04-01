#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x;

	printf("Enter value of x: \n");
	scanf("%d", &x);

	printf("%d\n", (3*(x*x*x*x*x)) + (2*(x*x*x*x)) - (5*(x*x*x)) - (x*x) - 6);
	return 0;
}
