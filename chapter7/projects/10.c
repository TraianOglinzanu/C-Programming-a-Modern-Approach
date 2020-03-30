#include <stdio.h>

int main(int argc, char const *argv[])
{
	//char vowel;
	char ch;
	int len = 0;

	printf("Enter a sentence: \n");
	ch = getchar();
	while(ch != '\n'){
		if(ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'
			||ch == 'u'){
			len++;
			ch = getchar();
		}else{
			ch = getchar();
		}
	}	
	printf("Your sentence contains %d vowels\n", len);
	return 0;
}
