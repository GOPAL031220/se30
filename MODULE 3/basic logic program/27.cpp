              //Convertion of days into months 
#include<stdio.h>
main()
{
	float a;
	printf("Enter Days:");
	scanf("%f",&a);   //user defined value stored
	
	printf("\n%.f Days = %.2f months",a,float(a/30));    //result
	
}

