#include <stdio.h>

int main(int argc, char const *argv[])
{
	int hour, minute, hour_to_minute,total;
	char time;

	printf("Enter a 12 - hour time(specify AM or PM): ");
	scanf("%d : %d %c", &hour, &minute, &time);

	switch(time){

		case'A':

			hour_to_minute = (hour * 60);
			total = (hour_to_minute + minute);

			if(total > 0 && total <= 530){
				printf("Closest departure time is 8:00 a.m. , arriving at 10:16 a.m.\n");	
			}else if(total > 530 && total <= 633){
				printf("Closest departure time is 9:43 a.m. , arriving at 11:52 a.m.\n");	
			}else if(total > 633 && total <= 729){
				printf("Closest departure time is 11:19 a.m. , arrivng at 1:31 p.m.\n");
			}	
			break;

		case'P':

			hour_to_minute = (hour * 60);
			total = (hour_to_minute + minute);

			if(total > 729 && total <= 817){
				printf("Closest departure time is 12:47 p.m , arriving at 3:00 p.m.\n");
			}else if(total > 817 && total <= 890){
				printf("Closest departure time is 2:00 p.m. , arrivng at 4:08 p.m.\n");
			}else if(total > 890 && total <= 995){
				printf("Closest departure time is 3:45 p.m. , arriving at 5:55 p.m.\n");
			}else if(total > 995 && total <= 1190){
				printf("Closest departure time is 7:00 p.m. , arriving at 9:20 p.m.\n");
			}else{
				printf("Closest departure time is 9:45 p.m. , arriving at 11:50 p.m.\n");
			}
			break;
		}
	return 0;
}
