#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int anagram(char word_one[], char word_two[]){

	int letter_one[26] = {0};
	int letter_two[26] = {0};

	int i = 0;

	while(word_one[i] != '\0'){
		letter_one[word_one[i] - 'a']++;
		i++;
	}

	int i = 0;

	while(word_two[i] != '\0'){
		letter_two[word_two[i] - 'a']++;
		i++;
	}

	//compare to see if anagram or not

	for(i = 0; i < 26; i++){
		if(letter_one[i] != letter_two[i]){
			return 0;
		}
	}
	return 1;
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
