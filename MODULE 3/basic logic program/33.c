#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c,d;
	
	printf("Enter Your Number: ");
	scanf("%d",&a);
	
	b=pow(a,1);
	c=pow(a,2);
	d=pow(a,3);
	
	printf("\n%d^1 : %d",a,b);
	printf("\n%d^2 : %d",a,c);
	printf("\n%d^3 : %d",a,d);
}
