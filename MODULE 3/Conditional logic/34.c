#include <stdio.h>

main()
{
    int month_number;

    printf("Enter the month number(1-12): ");   //user defined value stored
    scanf("%d", &month_number);

    if (month_number == 1)
	{
        printf("The month is January\n");   //result
    }
	else if (month_number == 2) 
	{
        printf("The month is February\n");
    }
	else if (month_number == 3)
	{
        printf("The month is March\n");
    }
	else if (month_number == 4)
	{
        printf("The month is April\n");
    }
	else if (month_number == 5)
	{
        printf("The month is May\n");
    }
	else if (month_number == 6)
	{
        printf("The month is June\n");
    }
	else if (month_number == 7)
	{
        printf("The month is July\n");
    }
	else if (month_number == 8) {
        printf("The month is August\n");
    }
	else if (month_number == 9)
	{
        printf("The month is September\n");
    }
	else if (month_number == 10)
	{
        printf("The month is October\n");
    }
	else if (month_number == 11)
	{
        printf("The month is November\n");
    }
	else if (month_number == 12)
	{
        printf("The month is December\n");
    }
	else
	{
        printf("Invalid month number.\n");
    }

}
