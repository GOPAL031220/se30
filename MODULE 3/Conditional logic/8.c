#include <stdio.h>
main()
{
    float height;

    printf("Enter the height of a person in centimeters: ");
    scanf("%f",&height);

    if ((height > 135.0) && (height <= 150.0))
	{
        printf("\nThe person is Small.");
    }
    
	else if ((height > 150.0) && (height <= 165.0))
	{
        printf("\nThe person is of Average Height.\n");
    }
    
	else if ((height > 165.0) && (height <= 195.0))
	{
        printf("\nThe person is Taller.\n");
    }
    
	else
	{
        printf("\nAbnormal height.\n");
    }
    
    
    
}
