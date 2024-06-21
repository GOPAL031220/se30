#include<stdio.h>
main()
{
	int a;
	
	printf("Enter Temperature in Centigrade: ");   //user defined value stored
	scanf("%d",&a);
	
	if(a<0)
	{
		printf("Freezing weather");    //result
	}
	
	else if(a>=0 && a<10)
	{
		printf("Very Cold weather");
	}
	
	else if(a>=10 && a<20)
	{
		printf("Cold weather");
	}
	
	else if(a>=20 && a<30)
	{
		printf("Normal Tempreture");
	}
	
	else if(a>=30 && a<40)
	{
		printf("Hot");
	}
	
	else if(a>=40)
	{
		printf("Very Hot");
	}
	
	else
	{
		printf("You Entered Invalid Tempreture.");
	}
	
}
