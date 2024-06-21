#include <stdio.h>

main() 
{
    int month_number;

    printf("Enter the month number(1-12): ");   //user defined value stored
    scanf("%d", &month_number);

    switch (month_number)  //result
	{
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("The month has 31 days.\n");
            break;
            
        case 4:
        case 6:
        case 9:
        case 11:
            printf("The month has 30 days.\n");
            break;
            
        case 2:
            printf("The month has 28 days (or 29 days in a leap year).\n");
            break;
            
        default:
            printf("Invalid month number.\n");
            break;
    }

}
