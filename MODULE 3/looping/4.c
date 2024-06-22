#include <stdio.h>

main() 
{
    int n,i, range;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Enter the range: ");   //user defined value stored
    scanf("%d", &range);
    
    printf("\nMultiplication Table of %d\n", n);
    
	for (i = 1; i <= range; i++)
	{
        printf("%d * %d = %d\n", n, i, n * i);   //result
    }

}
