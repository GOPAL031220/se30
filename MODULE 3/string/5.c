#include <stdio.h>

int compare_strings(char str1[], char str2[]) {
    int i = 0;

    while (str1[i]!= '\0' && str2[i]!= '\0') 
	{
        if (str1[i]!= str2[i])
		{
            return 0; // strings are not equal
        }
        i++;
    }

       // if one string is a prefix of the other, they are not equal
    if (str1[i]!= '\0' || str2[i]!= '\0') {
        return 0;
    }
    return 1;  // if strings are equal
}

main()
{
    char str1[] = "hello";
    char str2[] = "hello";
    char str3[] = "goodbye";

    if (compare_strings(str1, str2)) {
        printf("Strings '%s' and '%s' are equal.\n", str1, str2);
    } else {
        printf("Strings '%s' and '%s' are not equal.\n", str1, str2);
    }

    if (compare_strings(str1, str3)) {
        printf("Strings '%s' and '%s' are equal.\n", str1, str3);
    } else {
        printf("Strings '%s' and '%s' are not equal.\n", str1, str3);
    }

}
