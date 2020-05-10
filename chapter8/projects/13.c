#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char first,name;

    printf("Enter a first and last name: ");
    //scanf("%c", &first);
    first = getchar();


    //Read the first initial
    while(first == ' ');
    
    
    //skip the the first name
    while (first != ' ');


    //print the last name
    name = getchar();
    while (name != '\n'){
        if (name != ' ')
            putchar(name);
    }

    //print the first initial
    printf(", %c.\n\n", first);

    return 0;
}
