#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number, ten, one;
	printf("Enter a two-digit number: ");
	scanf("%d", &number);

	ten = number / 10;
	one = number % 10;

	if(number <= 10 || number >= 20){

		switch(ten){
			case 0:
				printf(" ");
				break;
			case 1:
				printf("ten -");
				break;
			case 2:
				printf("twenty -");
				break;
			case 3:
				printf("thirty -");
				break;
			case 4:
				printf("forty -");
				break;
			case 5:
				printf("fifty -");
				break;
			case 6:
				printf("sixty -");
				break;
			case 7:
				printf("seventy -");
				break;
			case 8:
				printf("eighty -");
				break;
			case 9:
				printf("ninety -");
				break;
		}

		switch(one){
			case 1:
				printf(" one\n");
				break;
			case 2:
				printf(" two\n");
				break;
			case 3:
				printf(" three\n");
				break;
			case 4:
				printf(" four\n");
				break;
			case 5:
				printf(" five\n");
				break;
			case 6:
				printf(" six\n");
				break;
			case 7:
				printf(" seven\n");
				break;
			case 8:
				printf(" eight\n");
				break;
			case 9:
				printf(" nine\n");
				break;
	}

	}else{
		switch(number){
			case 11:
				printf("eleven\n");
				break;
			case 12:
				printf("twelve\n");
				break;
			case 13:
				printf("thirteen\n");
				break;
			case 14:
				printf("fourteen\n");
				break;
			case 15:
				printf("fifteen\n");
				break;
			case 16:
				printf("sixteen\n");
				break;
			case 17:
				printf("seventeen\n");
				break;
			case 18:
				printf("eighteen\n");
				break;
			case 19:
				printf("nineteen\n");
				break;

		}
	}	
	return 0;
}
