#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num; 
	float frac;
	float fact = 1.0;
	float sum; //e

	printf("Enter number to compute mathematical constant e: ");
	scanf("%d", &num);

	for(int i = 1; i <= num; i++){
		fact = (fact*i);
		if(1/fact < num){
			break;
		}else{
			frac = (1/fact);
			sum += (frac);
		}
	}
	sum += 1;
	printf("%f ", sum);
	return 0;
}
