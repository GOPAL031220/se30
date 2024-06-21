#include <stdio.h>

main()
{
    int num;

    printf("Enter a number: ");  //user defined value stored
    scanf("%d", &num);

    if (num > 0)
	{
        printf("%d is a positive number.\n", num);   //result
    }
	
	else if (num < 0)
	{
        printf("%d is a negative number.\n", num);
    }
	
	else
	{
        printf("%d is zero.\n", num);
    }
    
    
}
