#include <stdio.h>

#define FLIGHT ((int) sizeof(departure / sizeof(departure[0]))

int main(void)
{
    int hour, minute, midnight;

    printf("Enter a 24-hour time: ");
    scanf("%d : %d", &hour, &minute);

	int departure[8] = {480, 530, 633, 729, 817, 890, 995, 1200};
	int arrival[8] = {529, 632, 728, 816, 889, 994, 1189, 1300};

	midnight = (hours * 60);
	midnight = midnight + minute;

	for(int i = FLIGHT; i >=0; i--){
		if(midnight >= departure[i]){
			break;
		}else if(midnight < departure[0]){
			i = FLIGHT - 1;
		}else{
			break;
		}
	}

	int dep_hour = departure[i]/60;
	int dep_min = departure[i]%60;

	int arr_hour = arrival[i]/60;
	int arr_min = arrival[i]%60;


  	printf("Closest departure time is %.2d : %.2d, arriving at %.2d :%. 2d.\n",
        dep_hour, dep_min, arr_hour, arr_min);

  return 0;
}
