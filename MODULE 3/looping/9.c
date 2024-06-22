#include <stdio.h>

main() {
    int number,sum=0,realnumber;
    printf("Enter a number: ");   //user defined value stored
    scanf("%d", &number);
    
    realnumber=number;

    while (number != 0)
	{
        sum = sum + (number % 10);  // Add the last digit
        number = number/10;  // Remove the last digit
    }
    
    printf("Sum of digits in %d is %d\n",realnumber,sum);
}
