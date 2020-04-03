#include <stdio.h>

int main(int argc, char const *argv[])
{
	int hour, minute;

	printf("Enter a 24-hour time: \n");
	scanf("%d:%d", &hour, &minute);

	if(hour < 12){
		printf("Equivalent 12 - hour time: %d: %d AM\n", hour, minute);
	}else{
		hour -= 12;
		printf("Equivalent 12 - hour time: %d: %d PM\n", hour, minute);
	}
	return 0;
}
