#include <stdio.h>
main()
{
    int n,i, term = 1,a=1,b=2,c;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("\n%d\n%d",a,b);

    for(i = 3; i <= n; i++)
	{
        c=3*a;
        printf("\n%d",c);
        a=b;
        b=c;
    }
}
