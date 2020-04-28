#include <stdlib.h>
#include <time.h>

#define ROW_SIZE 10
#define COL_SIZE 10

#define EMPTY '.'

int main(int argc, char const *argv[])
{
	char arr[ROW_SIZE][COL_SIZE];
	char i;
	int row, column, way;

	bool left, right, up, down;
	
	for(row = 0; row < ROW_SIZE; row++){
		for(column = 0; column < COL_SIZE; column++){
			arr[row][column] = '.';
		}
	}

	srand((unsigned) time(NULL));

	row = 0;
	column = 0;

	for(i = 'A'; i <= 'Z'; i++){
		arr[row][column] = i;

		way = rand() % 4; // choosing random direction for the array

		if(way == 0){
			row = row - 1;
			if(arr[row][column] != EMPTY){
				up = false;
				row = row +1;
				break;
			}
			up = true;
			arr[row][column] = i++;

		}else if(way == 1){
			column = column - 1;
			if(arr[row][column] != EMPTY){
				left = false;
				column = column + 1;
				break;
			}
			left = true;
			arr[row][column] = i++;

		}else if(way == 2){
			column = column + 1;
			if(arr[row][column] != EMPTY){
				right = false;
				column = column - 1;
				break;
			}
			right = true;
			arr[row][column] = i++;

		}else if(way == 3){
			row = row + 1;
			if(arr[row][column != EMPTY]){
				down = false;
				row = row - 1;
				break;
			}
			down = true;
			arr[row][column] = i++;

		}else{
			continue;
		}

	//printing out the grid
		for(row = 0; row < ROW_SIZE; row++){
			for(column = 0; column < COL_SIZE; column++){
				printf("%c", arr[row][column]);
			}
			printf("\n");
		}
	}
	return 0;
}
