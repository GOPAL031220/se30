#include<stdio.h>
main()
{
	int a,b;
	
	printf("Enter Your monthly salary: ");
	scanf("%d",&a);
	
	printf("\nYour insurance premium Amount Is: %d",a*10/100);
	printf("\nYour loan installment Amount Is: %d",a*10/100);
	printf("\nYour Remaining Salary After deduction Is: %d",a*80/100);
}
