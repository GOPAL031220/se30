#include <stdio.h>

extract_substring(char str[], int start, int end)
{
    int i;
    for (i = start; i <= end && str[i] != '\0'; i++)
	{
        printf("%c", str[i]);
    }
}

int main()
{
    char str[256];
    int start, end;

    printf("Enter a string: ");   //user defined value stored
    gets(str);
    str[strlen(str)] = '\0'; // end the string with null value

    printf("Enter the starting index: ");
    scanf("%d", &start);

    printf("Enter the ending index: ");  //user input
    scanf("%d", &end);

    printf("The substring is: ");
    extract_substring(str, start-1, end-1);  //result print
}
