#include <stdio.h>

main()
{
    char str[200][200];
    int i, max_len = 0, n;

    printf("Enter the number of strings: ");  //user defined value stored
    scanf("%d", &n);

    printf("Enter %d strings:\n", n);   //user defined value stored
    for (i = 0; i < n; i++)
	{
        scanf("%s", str[i]);
    }

    for (i = 0; i < n; i++)
	{
        int len = strlen(str[i]);  //lenth count
        if (len > max_len)
		{
            max_len = len;  //update max lenth
        }
    }

    printf("Maximum number of characters in a string: %d\n", max_len);   //result
}
