#include <stdio.h>
main()
{
    int number,first,last,realnumber;
    printf("Enter a number: ");
    scanf("%d", &number);
    realnumber=number;
    
    first=number%10;          //capture first digit
    while (number >= 10)
	{
        number = number/ 10;
    }
    last = number % 10;      //capture last digit
    
    printf("Summation of first and last Digit of %d is: %d\n", realnumber, first + last);
}
