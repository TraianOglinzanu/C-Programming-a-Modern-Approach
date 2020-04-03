#include <stdio.h>

int main(int argc, char const *argv[])
{
	int speed;

	printf("Enter speed(knots): ");
	scanf("%d", &speed);

	if(speed < 1){
		printf("Calm\n");
	}else if(speed >= 1 && speed <= 3){
		printf("Light air\n");
	}else if(speed >= 4 && speed <= 27){
		printf("Breeze\n");
	}else if(speed >= 28 && speed <= 47){
		printf("Gale\n");
	}else if(speed >= 48 && speed <= 63){
		printf("Storm\n");
	}else{
		printf("Hurricane\n");
	}
	return 0;
}
