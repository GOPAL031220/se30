             // swapping of numbers with multiplication and division

#include<stdio.h>
main()
{
	int n1,n2;
	printf("Enter First Number:");
	scanf("%d",&n1);
	
	printf("\nEnter Second number:");
	scanf("%d",&n2);   //user defined value stored
	
	printf("\nNumbers before swapping Are: %d   %d",n1,n2);
	
	n1=n1*n2;
	n2=n1/n2;
	n1=n1/n2;
	
	printf("\nNumbers After  swapping Are: %d   %d",n1,n2);  //swapping with multiplication and division
}

