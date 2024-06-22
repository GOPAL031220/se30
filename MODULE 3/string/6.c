#include <stdio.h>

main()
{
    char str[256];
    int i, alphabet_count = 0, digit_count = 0, special_count = 0;

    printf("Enter String: ");   //user defined value stored
    gets(str);

    for (i = 0; str[i]!= '\0'; i++)
	{
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))  //counting ke liye
		{
            alphabet_count++;
        }
		else if (str[i] >= '0' && str[i] <= '9') 
		{
            digit_count++;
        }
		else {
            special_count++;
        }
    }

    printf("Total number of alphabets: %d\n", alphabet_count);   //result
    printf("Total number of digits: %d\n", digit_count);
    printf("Total number of special characters: %d\n", special_count);

}
