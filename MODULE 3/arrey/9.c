#include<stdio.h>

union Myunion
{
	int a[5],i,j,temp;   //union created
	
}s1,s2,s3,s4;

struct Mystructure
{
	int a,b,c;         //structure created
	
}s5;

main()
{
	for(s2.i=0;s2.i<5;s2.i++)         //union variables accesed
	{
		printf("Enter Number: ");      //loop used for numnber input
		scanf("%d",&s1.a[s2.i]);
	}
	
	for(s2.i=0;s2.i<5;s2.i++)
	{
		for(s3.j=s2.i+1;s3.j<5;s3.j++)   // number swapping in acending order
		{
			if(s1.a[s2.i]>=s1.a[s3.j])
			{
				s4.temp=s1.a[s2.i];
				s1.a[s2.i]=s1.a[s3.j];
				s1.a[s3.j]=s4.temp;
				
			}
			
		}
	}
	
	
	for(s2.i=0;s2.i<5;s2.i++)
	{
		printf("\nYour Number is: %d",s1.a[s2.i]);    //number printed after swapping
	}
	
	
	
	
	
	printf("\n\nEnter Number 1: ");
	scanf("%d",&s5.a);                          //structure variable accesed
	
	printf("\nEnter Number 2: ");
	scanf("%d",&s5.b);
	
	printf("%d",s5.a);
	printf("\n%d",s5.b);
	
}
