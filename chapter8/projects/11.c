#include <stdio.h>
#include <ctype.h>

#define LENGTH 15

int main(int argc, char const *argv[])
{
    char ch;
    char number[LENGTH];

    printf("Enter phone number: ");

    ch = getchar();

    for(int i = 0;ch != '\n' && i < LENGTH; i++) {

        switch (toupper(ch)) {
            case 'A': 
            case 'B': 
            case 'C':
                number[i] = '2';
                break;
                
            case 'D': 
            case 'E': 
            case 'F': 
                number[i] = '3';
                break;
                
            case 'G': 
            case 'H': 
            case 'I': 
                number[i] = '4';
                break;
                
            case 'J': 
            case 'K': 
            case 'L': 
                number[i] = '5';
                break;
                
            case 'M': 
            case 'N': 
            case 'O': 
                number[i] = '6';
                break;
                
            case 'P': 
            case 'R': 
            case 'S': 
                number[i] = '7';
                break;
                
            case 'T': 
            case 'U': 
            case 'V': 
                number[i] = '8';
                break;
                
            case 'W': 
            case 'X': 
            case 'Y': 
                number[i] = '9';
                break;
                
            default:
                number[i] = ch;
                break;
        }
    }
    printf("In numeric form: ");
    for(int i = 0; i<LENGTH; i++){
    	printf("%c", number[i]);
    }

    return 0;
}
