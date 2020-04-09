#include <stdio.h>

int main(int argc, char const *argv[])
{
	int m1,d1,m2,d2,y1,y2;

	//int a,b,c;

	printf("Enter date (mm/dd/yy): ");
	scanf("%d/%d/%d", &m1,&d1,&y1);

	while(1){

		printf("Enter date (mm/dd/yy): ");
		scanf("%d/%d/%d", &m2,&d2,&y2);

		if(m2 == 0 && d2 == 0 && y2 == 0){
			break;
		}

		if(y2 < y1){
           		m1 = m2;
            		d1 = d2;
            		y1 = y2;

		}else if(y1 == y2 && m2 < m1){
        		m1 = m2;
            		d1 = d2;
            		y1 = y2;

        	}else if(y1 == y2 && m1 == m2 && d2 < d1){	
        		m1 = m2;
            		d1 = d2;
            		y1 = y2; 

       		}else
        		break;

	}
	printf("%d/%d/%d is the earliest date\n",m1,d1,y1);
	return 0;
}
