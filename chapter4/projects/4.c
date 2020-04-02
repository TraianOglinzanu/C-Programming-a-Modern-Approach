#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number,a,b,c,d,e;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &number);

	a = (number/4096)%8;
	b = (number/512)%8;
	c = (number/64)%8;
	d = (number/8)%8;
	e = (number%8);

	printf("In octal, your number is: %d%d%d%d%d\n", a,b,c,d,e);
	return 0;
}
