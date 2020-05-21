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

	while(ch != '\n'){
		message[i++] = ch;
	}
	message[i++] = '\0';

	printf("Enter shift amount (1 - 25): ");
	scanf("%d", &n);



	return 0;
}
