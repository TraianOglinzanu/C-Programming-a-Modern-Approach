#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
	char word, termintating_ch = ' ';

	char sentence[1000] = {'\0'};

	int i,j;

	word = getchar();
	i = 0;
	printf("Enter a sentence: ");
	while (word != '\n')
		if(termintating_ch == '.' && termintating_ch == '?' && termintating_ch
			== '!'){
			termintating_ch = word;
			break;
		}
		sentence[i++] = word;

	
	return 0;
}
