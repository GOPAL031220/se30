#include<stdio.h>
main()
{
    int month;

    printf("Enter month number (1-12): ");   //user defined value stored
    scanf("%d", &month);

    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)   //result
	{
        printf("31 Days.\n");
    }
	else if(month == 4 || month == 6 || month == 9 || month == 11)
	{
        printf("30 Days.\n");
    }
	else if(month == 2)
	{
        printf("28/29 Days.\n");
    }
	else
	{
        printf("Invalid Month.\n");
    }

}
