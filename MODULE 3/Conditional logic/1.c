#include<stdio.h>
main()
{
	int a,b;
	
	printf("Enter number 1: ");
	scanf("%d",&a);
	
	printf("Enter number 2: ");   //user defined value stored
	scanf("%d",&b);
	
	if(a==b)
	{
		printf("\nBoth Numbers are Equal");  //result
	}
	
	else
	{
		printf("\nBoth Numbers are not Equal");
	}

}
