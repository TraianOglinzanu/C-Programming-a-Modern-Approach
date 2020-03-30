#include <stdio.h>

int main(int argc, char const *argv[])
{
	char ch;
	int number = 0;

	printf("Enter phone number: \n");
	ch = getchar();
	while(ch != '\n') {
		if(ch >= 'A' && ch <= 'Z'){
			ch++;
			number = ch;
			ch = getchar();
		}
	}
	printf("%d\n", number);
	return 0;
}
