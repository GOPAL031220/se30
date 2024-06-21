#include<stdio.h>
main()
{
	char a[5][25];
	int b[5],i;
	
	for(i=0;i<5;i++)
	{
		printf("\nEnter Name of Employee %d: ",i+1);
		scanf("%s",a[i]);
		
		printf("Enter Monthly Salary of %s: ",a[i]);     //user defined value stored
		scanf("%d",&b[i]);
		
	}
	
	printf("\nAverage Salary of 5 Employees is: %d",(b[0]+b[1]+b[2]+b[3]+b[4])/5);    //result
	printf("\nTotal Salary of 5 Employees is: %d",b[0]+b[1]+b[2]+b[3]+b[4]);
}
