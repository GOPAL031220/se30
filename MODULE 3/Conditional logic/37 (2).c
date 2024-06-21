#include <stdio.h>

main() 
{
    char ch;

    printf("Enter a character: ");   //user defined value stored
    scanf(" %c", &ch);

    switch (ch) 
	{
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", ch);   //result
            break;
            
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", ch);
            break;
            
        default:
            printf("%c is a consonant.\n", ch);
            break;
    }
}
