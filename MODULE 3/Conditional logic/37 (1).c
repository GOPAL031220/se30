#include <stdio.h>

main()
{
    int day;

    printf("Enter the day number (1 for Monday, 2 for Tuesday, ..., 7 for Sunday): ");   //user defined value stored
    scanf("%d", &day);

    switch (day) 
	{
        case 1:
            printf("Monday\n");   //result
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day number.\n");
            break;
    }
    
}
