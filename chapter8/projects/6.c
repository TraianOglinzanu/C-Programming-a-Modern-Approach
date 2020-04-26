#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	char sentence[1000]; 
	char ch;
	
	printf("Enter message: ");
	ch = getchar();

	int i = 1;
	while(ch != '\n') {
		sentence[i] = ch;
		i++;
	}

	printf("In B1FF speak: ");
		for(int j = 0; j < i; j++) {
			ch = sentence[j];
			ch = toupper(ch);
			switch(ch) {

				case 'A':
					ch = '4';
					break;

				case 'B':
					ch = '8';
					break;

				case 'E':
					ch = '3';
					break;

				case 'I':
					ch = '1';
					break;

				case 'O':
					ch = '0';
					break;

				case 'S':
					ch = '5';
					break;

				default:
					break;
			}
			printf("%c", ch);
		}
		printf("!!!!!!!!!\n");
   
	return 0;
}
