#include <stdio.h>
main()
{
    int n,i,sum = 0;

    printf("Enter a positive integer: ");   //user defined value stored
    scanf("%d", &n);

    for( i = 1; i <= n; i++)
	{
        sum += i*i;
    }
    printf("\nThe sum of the series (1*1)+(2*2)+(3*3) + ... + (%d*%d) is: %d",n,n, sum);   //result

}
