              //swapping of Numbers
#include<stdio.h>
main()
{
	int n1,n2,temp;
	printf("Enter First Number:");
	scanf("%d",&n1);
	
	printf("\nEnter Second number:");
	scanf("%d",&n2);   //user defined value stored
	
	printf("\nNumbers before swapping Are: %d   %d",n1,n2);
	temp=n1;
	n1=n2;
	n2=temp;
	printf("\nNumbers After swapping with 3rd variable Are: %d   %d",n1,n2);  //swapping with third variable
	
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	
	printf("\nNumbers After swapping without 3rd variable Are: %d   %d",n1,n2);  //swapping without third variable
	
}

