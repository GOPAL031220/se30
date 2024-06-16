#include<stdio.h>
main()
{
	int a[5],i,e=1;
	
	for(i=0;i<5;i++)
	{
		printf("Enter Amount of Expense %d: ",e);
		scanf("%d",&a[i]);
		e++;
	}
	
	printf("\nAverage of your Expenses is: %d",(a[0]+a[1]+a[2]+a[3]+a[4])/5);
	
}
