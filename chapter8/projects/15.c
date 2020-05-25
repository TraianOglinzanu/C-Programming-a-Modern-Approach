#include <stdio.h>
#include <ctype.h>

#define length 80

int main(int argc, char const *argv[])
{
	char ch = ' ';
	char message[length]; 

	int i = 0;
	int j = 0;

	ch = getchar();
	printf("Enter message to be encrypted: ");

	for(int i = 0; ch != '\n'; i++){
		message[i++] = ch;
	}

	printf("Enter shift amount (1 - 25): ");
	scanf("%d", &j);

	for (i = 0; i < length - 1 && message[i] != '\0'; i++) {
		ch = message[i];
		if (ch >= 'A' && ch <= 'Z')
			printf("%c", ((ch - 'A') + j) % 26 + 'A');
		else if (ch >= 'a' && ch <= 'z')
			printf("%c", ((ch - 'a') + j) % 26 + 'a');
		else
			printf("%c", ch);
	}

	printf("\n");

	return 0;
}
