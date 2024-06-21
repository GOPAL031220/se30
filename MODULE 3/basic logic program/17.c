#include<stdio.h>
main()
{
	int a,b;
	
	printf("Enter Your Salary Per Annum: ");
	scanf("%d",&a);
	
	printf("How Much percentage you want to deduct for insurance premium: ");    //user defined value stored
	scanf("%d",&b);
	
	printf("\nYour insurance premium Amount Is: %d",a*b/100);
	printf("\nYour Remaining Salary After premium Is: %d",a-(a*b/100));   //result
}
