#include <stdio.h>

int main(int argc, char const *argv[])
{
	char word, last;
	int c = 0; //characters
	int w = 0; //words
	float length = 0.0f;

	printf("Enter a sentence: ");
	word = getchar();

	while(word != '\n'){
		if(word != ' '){
			c++;
			if(w == 0){
				w++;
			}
		}
		else if(last != ' '){
			w++;
		}
		last = word;
	}

	length = (c/w);
	printf("Average length is: %f\n", length);
	
	return 0;
}
