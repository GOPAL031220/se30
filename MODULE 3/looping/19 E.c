#include<stdio.h>
main()
{
	int a=1,i,j;
	
	for(i=1;i<8;i++)   //row 
	{
		for(j=1;j<=i;j++)   //coloum
		{
			if(a<=9) printf("%d  ",a);
			else printf("%d ",a);
			a++;
		}
	     printf("\n");
		
	}
	
	
}
