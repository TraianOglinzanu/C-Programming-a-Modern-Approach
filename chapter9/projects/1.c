#include <stdio.h>

#define LENGTH 1000

void selection(int array[], int c);

int main(int argc, char const *argv[])
{
	int a, b, c, array[LENGTH];
	printf("Enter list of integers to be sorted: "); 

	selection(a,c);
    
    printf("Sorted list:");
    for (i = 0; i < c; i++) {
        printf(" %d", array[i]);
    }
    printf("\n");
	
	return 0;
}

void selection(int array[], int c) {
	
}
