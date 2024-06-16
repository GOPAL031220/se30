#include <stdio.h>

main()
{
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("The sum is: %d\n", sum);

    if(sum >= -10 && sum <= 10) printf("The sum is between -10 and 10.\n");
    else if(sum > 10 && sum <= 100) printf("The sum is between 10 and 100.\n");
    else if(sum > 100 && sum <= 1000) printf("The sum is between 100 and 1000.\n");
    else printf("The sum is greater than 1000.\n");

}
