#include<stdio.h>
main()
{
	int i,j;
	int a=65;
    
	for(i=1;i<7;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",a);
			a++;
		}
	     printf("\n");
	     a=65;
		
	}
	
	
}