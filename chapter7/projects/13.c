#include <stdio.h>

int main(int argc, char const *argv[])
{
	float character;
	float word;
	float average;
	char ch;

	printf("Enter a sentance: \n");
	ch = getchar();

	while(ch != '\n'){

		if(ch == ' '){
			word++;
			continue;
		}
		character++;	
	}
	average = (character/word);
	printf("Average word length: %f\n", average);
	return 0;
}
