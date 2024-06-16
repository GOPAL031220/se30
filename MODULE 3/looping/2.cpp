           //Accept 5 numbers from user and display all numbers
#include<stdio.h>
main()
{
	int a[5],i;
	
	for(i=0;i<5;i++)
	{
		printf("\nEnter Your Number: ");
		scanf("%d",&a[i]);
		
	}
	
	for(i=0;i<5;i++)
	{
		printf("\nYour Number is: %d",a[i]);
	}
	
	
}
