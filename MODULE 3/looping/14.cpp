           // factorial of 5 numbers
#include<stdio.h>
fac()
{
	double n,i,fac=1;
	
	printf("Enter number for factorial: ");  //user defined value stored
	scanf("%lf",&n);
	
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	printf("factorial is: %.lf\n\n",fac);   //result
}

main()
{
fac();
fac();
fac();
fac();
fac();		
}
