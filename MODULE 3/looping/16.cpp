         //sum of natural numbers using while loop
#include<stdio.h>
main()
{
	int a,sum=0;
	
	printf("Enter your Natural Number: ");
	scanf("%d",&a);
	
	int i=1;
	while(i<=a)
	{
		sum=sum+i;
		i++;
	}
	
	printf("\nSum of natural Numbers is: %d",sum);
	
	
}
