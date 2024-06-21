#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c,d;
	
	printf("Enter Your Number: ");   //user defined value stored
	scanf("%d",&a);
	
	b=pow(a,1);
	c=pow(a,2);
	d=pow(a,3);
	
	printf("\n%d^1 : %d",a,b);
	printf("\n%d^2 : %d",a,c);  //result
	printf("\n%d^3 : %d",a,d);
}
