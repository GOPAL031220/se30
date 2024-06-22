           // factorial number
#include<stdio.h>
main()
{
	double n,i,fac=1;
	
	printf("Enter number for factorial: ");     //user defined value stored
	scanf("%lf",&n);
	
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	printf("\nfactorial is: %.lf",fac);    //result
		
}
