                //Calculator

#include<stdio.h>
main()
{
	int a,b;

	printf("Please Enter your First Number: ");
	scanf("%d",&a);       
	printf("Please Enter your Second Number: ");
	scanf("%d",&b);        //user defined number stored
	
	printf("\n\n%d + %d = %d",a,b,a+b);    //result print
	printf("\n%d - %d = %d",a,b,a-b);
	printf("\n%d * %d = %d",a,b,a*b);
	printf("\n%d / %d = %d Modulo %d",a,b,a/b,a%b);
	
} 
