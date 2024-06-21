#include <stdio.h>

main() {
    int num, maxdigit =0, digit, originalNum; 

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while(num != 0)   //run loop until num is zero
	{
        digit = num % 10;  //capture last digit
        if (digit > maxdigit)        // If it's greater than maxdigit update maxdigit
		{ 
            maxdigit = digit;
        }
        num = num / 10;  ///delete last digit
    }
    printf("Max digit in %d is %d\n", originalNum,maxdigit);
}

