#include<stdio.h>
main()
{
	int a=1,i,j;
	
	for(i=1;i<8;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(a<=9) printf("%d  ",a);
			else printf("%d ",a);
			a++;
		}
	     printf("\n");
		
	}
	
	
}
