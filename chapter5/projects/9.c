#include <stdio.h>

int main(int argc, char const *argv[])
{
	int m1,d1,m2,d2,y1,y2;

	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &m1,&d1,&y1);
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &m2,&d2,&y2);

	if(y1 > y2){
		printf("%d/%d/%d is earlier than %d/%d/%d\n", 
			m2,d2,y2,m1,d1,y1);
	}else if(m1 > m2){
		printf("%d/%d/%df is earlier than %d/%d/%d\n", 
			m2,d2,y2,m1,d1,y1);
	}else if(d1 > d2){
		printf("%d/%d/%d is earlier than %d/%d/%d\n", 
			m2,d2,y2,m1,d1,y1);
	}else{
		printf("%d/%d/%d is earlier than %d/%d/%d\n", 
			m1,d1,y1,m2,d2,y2);
	}

	return 0;
}
