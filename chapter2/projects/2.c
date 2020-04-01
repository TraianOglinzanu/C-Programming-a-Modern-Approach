#include <stdio.h>

#define pi 3.14159265
#define radius 10

int main(void)
{
    float volume = (4.0f/3.0f * (pi * (radius * radius * radius)));
    printf("Volume is: %.4f", volume);

    return 0;
}
