#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a,b,c,d,small,large;

	printf("Enter four integers: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	if(a > b){
		large = a;
		small = b;
	}else{
		large = b;
		small = a;
	}

	if(c > large){
		large = c;
	}

	if (c < small){
		small = c;
	}

	if(d > large){
		large = d;
	}

	if(d < small){
		small = d;
	}	

	printf("Largest: %d\nSmallest: %d", large, small);

	return 0;
}
