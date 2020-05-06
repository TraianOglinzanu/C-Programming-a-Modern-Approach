#include <stdio.h>

int main(int argc, char const *argv[])
{
	int hour, minute;

	printf("Enter a 24 - hour time: ");
	scanf("%d : %d", &hour, &minute);

	int hour_to_minute = (hour * 60);
	int total = (hour_to_minute + minute);

	int departure[8] = {480, 530, 633, 729, 817, 890, 995, 1200};

	int arrival[8] = {529, 632, 728, 816, 889, 994, 1189, 1300};

	return 0;
}
