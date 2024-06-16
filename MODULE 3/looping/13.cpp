           // factorial number using while
#include<stdio.h>
main()
{
	double n,i=1,fac=1;
	
	printf("Enter number for factorial: ");
	scanf("%lf",&n);
	
	while(i<=n)
	{
		fac=fac*i;
		i++;
	}
	printf("\nfactorial is: %.lf",fac);
		
}
