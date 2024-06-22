#include <stdio.h>

main() {
    int num, reversedNum = 0, remainder, originalNum;

    printf("Enter a number: ");   //user defined value stored
    scanf("%d", &num);

    originalNum = num;

    for(num=num; num != 0;num/=10)   //number reversed
	{
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
    }
    printf("The reverse of %d is %d.\n", originalNum, reversedNum);    //result
}

