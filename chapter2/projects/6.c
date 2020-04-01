#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x;

	printf("Enter value of x: \n");
	scanf("%d", &x);

	printf("%d\n", ((((3*x + 2)*(x - 5)*(x - 1)*(x + 7)*(x - 6)))));

	return 0;
}
