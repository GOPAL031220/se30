#include <stdio.h>
main()
{
    int n,i,j,sum = 0;

    printf("Enter a positive integer: ");    //user defined value stored
    scanf("%d", &n);

    for( i = 1; i <= n; i++)    //make sum of series
	{
		for(j=1;j<=i;j++)
		{
        sum += j;
        }
    }
    printf("\nThe sum of the series  (1)+(1+2)+(1+2+3)+(1+2+3+4) + ... + (1+2+3+4+...+%d) is: %d",n, sum);  //result
}
