#include<stdio.h>
main()
{
	int a[2][3],i,j, b[2][3];
	
	printf("Enter Matrix 1:\n");    //first matrix input
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nEnter Matrix 2:\n");   //second metrix input
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\nAddition: ");     //addition of both matrix
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]+b[i][j]);
		}
	}
	
	printf("\nSubstraction: ");      //substraction of both matrix
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]-b[i][j]);
		}
	}
	
	printf("\nMultiplication: ");      //Multiplication of both matrix
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]*b[i][j]);
		}
	}
}
