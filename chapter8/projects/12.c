#include<stdio.h>
#include<ctype.h>

int main(int argc, char const *argv[])
{
	int scrabble_sum = 0;
	char ch;
	printf("Enter a word: ");
	ch = getchar();

	while(ch != 0){
		switch(toupper(ch)){
			case 'A':
			case 'E':
			case 'I':
			case 'L':
			case 'N':
			case 'O':
			case 'R':
			case 'T':
			case 'U':
				scrabble_sum += 1;
				break;
			case 'D':
			case 'G':
				scrabble_sum += 2;
				break;
			case 'B':
			case 'C':
			case 'M':
			case 'P':
				scrabble_sum += 3;
				break;
			case 'F':
			case 'H':
			case 'V':
			case 'W':
			case 'Y':
				scrabble_sum += 4;
				break;	
			case 'K':
				scrabble_sum += 5;
				break;
			case 'J':
			case 'X':
				scrabble_sum += 8;
				break;
			case 'Q':
			case 'Z':
				scrabble_sum += 10;
				break;
		}
	}
	printf("Scrabble value: %d\n", scrabble_sum);
	return 0;
}
