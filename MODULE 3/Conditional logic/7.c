#include<stdio.h>
main()
{
	int a;
	
	printf("Enter Your marks: ");
	scanf("%d", &a);
	
	if(a>=33 && a<=100)
	{
		printf("Congratulation You Are Pass");
	}
	
	else if(a<=32 && a>=0)
	{
		printf("You Are Fail");
	}
	
	else
	{
		printf("You Entered Invalid Marks");
	}
	
}
