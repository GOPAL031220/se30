#include<stdio.h>

main()
{
	int a=0,b=1,c,i,j;
	
	printf("Enter Number: ");
	scanf("%d",&j);
	
	printf("%d\n",a);
	printf("%d\n",b);
	
	for(i=3;i<=j;i++)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	}
	
}
