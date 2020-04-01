#include <stdio.h>

#define pi 3.14159265

int main(void)
{
	int radius;
	printf("Enter radius: \n");
	scanf("%d", &radius);
  float volume = (4.0f/3.0f * (pi * (radius * radius * radius)));
  printf("Volume is: %.4f", volume);

  return 0;
}
