#include <stdio.h>

main()
{
    int num;

    printf("Enter a number: ");   //user defined value stored
    scanf("%d", &num);

    if (num > 0)
	{
        printf("The number is positive.\n");   //result
    }
    
	else if (num < 0)
	{
        printf("The number is negative.\n");
    } 
    
	else 
	{
        printf("The number is zero.\n");
    }

}
