               // pattern
#include<stdio.h>
main()
{
	int i,j;
	for( i=1;i<=7;i++)  //row 
	{
		for(j=1;j<=i;j++)  //coloum
		{
			printf(" *");
		}
		printf("\n");
	}
	
	for( i=6;i>0;i--)  //row for down pattern
	{
		for(j=i;j>0;j--)    //coloum
		{
			printf(" *");
		}
		printf("\n");
	}
	
}



