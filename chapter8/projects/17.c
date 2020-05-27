#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
	int i,j;
	int column;
	int row;
	int sqaure[i][i];

	printf("This program createst a magic square of a specified size. \n");
	printf("The size must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");
	scanf("%d", &i);

	int square[i][i];
		for (row = 0; row < i; row++) {
			for (column = 0; column < i; column++) {
				square[row][column] = 0;
			}
		printf("\n");
	}

	column = i / 2;
	row = 0;
	int squared = (i*i);

	for(j = 0; j < squared; j++){
		square[row][column] = j;
	}

	for(row = 0; row < i; row++){
		for (column = 0; column < i; column++){ 
			printf("%2d ", square[row][column]);
		}
		printf("\n");
	}

	return 0;
}
