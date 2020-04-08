#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number,day;
	int dayofweek;

	printf("Enter number of days in month: ");
	scanf("%d", &number);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &day);

	for(int i = 1,dayofweek = 1; i <= number + day -1; i++){
		if(i < day){
			printf("  ");
		}else{
			printf("%d\n", dayofweek++);
		}
		if(i % 7 == 0){
			printf("\n");
		}
	}

	printf("\n");
	return 0;
}
