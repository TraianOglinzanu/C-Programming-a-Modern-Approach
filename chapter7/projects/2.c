#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i,n;

	printf("This program prints a table of squares. \n");
	printf("Enter number of entries in a table: ");
	scanf("%d", &n);
	getchar();

	for(i = 1; i <= n; i++){
		printf("%10d%10d\n",i, i*i);

		if(i % 24 == 0){
			printf("Press Enter to continue...\n");
			while(getchar() != '\n')
				continue;
		}
	}
	return 0;
}
