         //Table 
#include<stdio.h>
main()
{
	int a,i;
	
	printf("Enter your number for Table: ");
	scanf("%d",&a);
	
	for(i=1;i<11;i++)
	{
		printf("\n%d*%d=%d",a,i,a*i);
	}
}
