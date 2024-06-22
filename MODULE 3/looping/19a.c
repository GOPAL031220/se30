#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<6;i++)   //row
	{
		for(j=1;j<=i;j++)  //coloum
		{
			if(j%2==0) printf("0 ");   
			else printf("1 ");
		}
		printf("\n");
	}
}
