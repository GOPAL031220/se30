#include <stdio.h>

main()
{
    char str[256];
    int i, vowel_count = 0, consonant_count = 0;

    printf("Enter String: ");   //user defined value stored
    gets(str);

    for (i = 0; str[i]!= '\0'; i++)  //counting
	{
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
		{
            vowel_count++;
        } 
		else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
            consonant_count++;
        }
    }

    printf("Total number of vowels: %d\n", vowel_count);
    printf("Total number of consonants: %d\n", consonant_count);   //result
    
}
