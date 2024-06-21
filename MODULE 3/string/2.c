#include<stdio.h>
main()
{
	int i;
	char a[256];
	
	printf("Enter String: ");
	gets(a);
	
	printf("\nIndividual characters of the string are:\n");

    for (i = 0; a[i] != '\0'; i++)
	{
        printf("Character %d: %c\n", i + 1, a[i]);
    }
}
