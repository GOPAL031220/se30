         //Table 
#include<stdio.h>
main()
{
	int a,i;
	
	printf("Enter your number for Table: ");     //user defined value stored
	scanf("%d",&a);
	
	for(i=1;i<11;i++)
	{
		printf("\n%d*%d=%d",a,i,a*i);   //result print
	}
}
