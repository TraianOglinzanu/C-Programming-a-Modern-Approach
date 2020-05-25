#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	char ch = ' ';
	char message[length]; 

	//int i = 0;

	ch = getchar();
	printf("Enter message to be encrypted: ");

	for(int i = 0; ch != '\n'; i++){
		
	}

	printf("Enter shift amount (1 - 25): ");
	scanf("%d", &n);

	for (i = 0; i < message_length - 1 && message[i] != '\0'; i++) {
		ch = message[i];
		if (ch >= 'A' && ch <= 'Z')
			printf("%c", ((ch - 'A') + n) % 26 + 'A');
		else if (ch >= 'a' && ch <= 'z')
			printf("%c", ((ch - 'a') + n) % 26 + 'a');
		else
			printf("%c", ch);
	}

	printf("\n");

	return 0;
}
