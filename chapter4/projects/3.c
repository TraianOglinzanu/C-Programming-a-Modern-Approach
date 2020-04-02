#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a,b,c;

	printf("Enter a three-digit number: ");
	scanf("%d%d%d",&a,&b,&c);

	printf("The reversal is: %d%d%d\n",c,b,a);
	return 0;
}
