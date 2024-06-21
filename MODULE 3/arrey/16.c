#include<stdio.h>
main()
{
	int a[5],i,sum=0;
	for(i=0;i<5;i++)
	{
	printf("Enter number : ");  //user input
	scanf("%d",&a[i]);	
	}
	for(i=0;i<5;i++)
	{
	sum=sum+a[i];  //calculate total sum
	}
	
	printf("\nSum of number is: %d",sum);	 //result print

}
