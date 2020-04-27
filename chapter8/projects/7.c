#include <stdio.h>

int main(int argc, char const *argv[])
{
	int array[5][5]; //[ROWS][COLUMN]
	int i,j;
	int sum = 0;
	int sum_two;

	for(i = 0; i < 5; i++) {
		printf("Enter row %d: ",i + 1);
		for(j = 0; j < 5; j++) {
			scanf("%d", &array[i][j]);
		}
	}

	printf("Row totals: ");
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
			sum += array[i][j];
		}
		printf("%d", sum);
	}

	printf("\n");

	printf("Column totals: ");
	for(i = 0; i < 5; i++) {
		sum_two = 0; 
		for(j = 0; j < 5; j++) {
			sum += array[i][j];
		}
		printf("%d\n", sum);
	}

	return 0;
}
