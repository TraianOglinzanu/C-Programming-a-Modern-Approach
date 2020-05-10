#include<stdio.h>
#include<ctype.h>

#define SCRABBLE 26

int main(int argc, char const *argv[])
{
	int scrabble_sum = 0;
	int array[SCRABBLE] = {1,3,3,2,1,4,2,4,1,8,
		5,1,3,1,1,3,1,1,1,1,4,4,8,4,10};
	char ch;

	printf("Enter a word: ");
	ch = getchar();

	while(ch != '\n'){
		switch(toupper(ch)){
			while(ch < 'A' || ch > 'Z'){
				continue;
			}
			scrabble_sum = scrabble_sum + array[ch - 'A'];
		}
	}
	printf("Scrabble value: %d\n", scrabble_sum);
	return 0;
}
