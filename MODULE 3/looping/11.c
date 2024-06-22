#include <stdio.h>

main()
{
    char students[5][50];
    int i;

    for (i = 0; i < 5; i++)
	{
        printf("Enter name of student %d: ", i+1);   //user defined value stored
        scanf("%s", students[i]);
    }

    printf("\nHere are the names of the students:\n");     //result
    for (i = 0; i < 5; i++)
	{
        printf("%s\n", students[i]);
    }
}
