#include <stdio.h>

int main()
{
    int n,i;
    float sum = 0.0;

    printf("Enter a positive integer: ");   //user defined value stored
    scanf("%d", &n);

    for(i = 1; i <= n; i++)    //make calculation
	{
        if(i % 2 == 0)
		{
            sum =sum - (float)i / (i + 1);
        }
		else
		{
            sum =sum + (float)i / (i + 1);
        }
    }
    printf("\nThe sum of the series 1/2 - 2/3 + 3/4 - 4/5 + 5/6 ... is: %.3f", sum);   //result
}
