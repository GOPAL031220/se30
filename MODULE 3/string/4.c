#include <stdio.h>

int main()
{
    char str[256];
    
    printf("Enter string: ");
    gets(str);
    
    int i, word_count = 0;

    for (i = 0; str[i]!= '\0'; i++) 
	{
        if (str[i] ==' ' && str[i + 1]!= ' ' && str[i + 1]!= '\0')   //count the words
		{
            word_count++;
        }
    }

    // Count the last word
   if (str[i - 1]!= ' ')
    {
        word_count++;
    }

    printf("Total number of words: %d\n", word_count);  //result print

}
