#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int anagram(char word_one[], char word_two[]){

	int letter_one[26] = {0};
	int letter_two[26] = {0};

	int i = 0;

	

}

int main(int argc, char const *argv[])
{
	char word_one[];
	char word_two[];

	printf("Enter first word: ");
	fgets(word_one);

	printf("Enter second word: ");
	fgets(word_two);

	if(check_anagram(word_one, word_two)){
		printf("The words are anagrams");
	}else{
		printf("The words are not anagrams");
	}
	
	return 0;
}
