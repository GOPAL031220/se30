#include<stdio.h>
main()
{
	int m;
	
	printf("Enter number: ");  //user defined value stored
	scanf("%d",&m);
	
	if(m==0)
	{
		printf("\nN= 0");  //result
	}
	
	else if(m>=1)
	{
		printf("\nN= 1");
	}
	
	else
	{
		printf("\nN= -1");
	}

}
