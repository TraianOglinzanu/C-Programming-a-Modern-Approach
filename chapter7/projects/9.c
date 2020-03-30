#include <stdio.h>

int main(int argc, char const *argv[])
{
	int hours,minutes;
	int new_hours,new_minutes;
	char ch;

	printf("Enter a 12 - hour time: \n");
	scanf("%d:%d %c", &hours, &minutes, &ch);

	if(ch == 'P'){
		new_hours = (hours + 12);
		new_minutes = minutes;
		printf("Equivalent 24 - hour time: %d : %d\n", new_hours,
			new_minutes);

	}else if(ch == 'A'){
		printf("Equivalent 24 - hour time: %d : %d\n", hours, minutes);

	}else{
		printf("-1\n");
	}

	return 0;
}
