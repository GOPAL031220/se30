#include <stdio.h>

main() {
    int num, reversedNum = 0, remainder, originalNum;

    printf("Enter a number: ");    //user defined value stored
    scanf("%d", &num);

    originalNum = num;

    while(num != 0)
	{
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;  //number reversed
        num = num / 10;
    }
    printf("The reverse of %d is %d.\n", originalNum, reversedNum);  //result
}

