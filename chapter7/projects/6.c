#include <stdio.h>

int main(int argc, char const *argv[])
{
	int integer;
	float fl;
	double dbl;
	long double lngdbl;

	printf("Size of int: %d \n", (int)sizeof(integer));
	printf("Size of float: %.2f \n", (float)sizeof(fl));
	printf("Size of double: %.2lf \n", (double)sizeof(dbl));
	printf("Size of long double: %.2Lf \n", (long double)sizeof(lngdbl));
	
	return 0;
}
