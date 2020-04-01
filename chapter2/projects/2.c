#include <stdio.h>

#define pi 3.14159265

int main(void)
{
    float volume = (4.0f/3.0f * (pi * (10 * 10 * 10)));
    printf("Volume is: %.4f", volume);

    return 0;
}
