#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("Enter Your Number 1: ");
	scanf("%d",&a);
	
	printf("Enter Your Number 2: ");
	scanf("%d",&b);
	
	printf("Enter Your Number 1: ");  //user defined value stored
	scanf("%d",&c);
	
	//result
	(a>=b && a>=c)? printf("\n%d is The Greatest Number",a): (b>=c && b>=a)? printf("\n%d is The Greatest Number",b):printf("\n%d is The Greatest Number",c);

}
