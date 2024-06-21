#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("Enter Your Marks In Math: ");
	scanf("%d",&a);
	
	printf("Enter Your Marks In Physics: ");
	scanf("%d",&b);
	
	printf("Enter Marks In Chemistry: ");   //user defined value stored
	scanf("%d",&c);
	
	if(a>=65 && b>=55 && c>=50 && ((a+b+c)>=190 || (a+b)>=140))    //result
	
	{
		printf("\nCongratulation You Are Eligible for course");
	}
	
	else
	{
		printf("\nYou Are not Eligible for course");
	}
	
	
}
