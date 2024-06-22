         //pattern
#include<stdio.h>
main()
{
	int i,j,k;
	
	for (i=1;i<=6;i++) //raw
	{
		for(k=1;k<=6-i;k++) //space
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)   //star print
		{
			printf(" *");
		}
		printf("\n");
	}
}
