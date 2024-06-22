#include <stdio.h>
main()
{
    int n,i,sum = 0;

    printf("Enter a positive integer: ");    //user defined value stored
    scanf("%d", &n);

    for( i = 1; i <= n; i++)
	{
        sum += i;
    }
    printf("\nThe sum of the series 1 + 2 + 3 +... + %d is: %d", n, sum);    //result

}
