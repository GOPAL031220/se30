              //Convertion of Years into Days & Months 
#include<stdio.h>
main()
{
	float a;
	printf("Enter Years:");
	scanf("%f",&a);   //user defined value stored
	
	printf("\n%.2f Years = %.2f Days ",a,float(a*365));    //result
	printf("\n%.2f Years = %.2f Months ",a,float(a*12));
}

