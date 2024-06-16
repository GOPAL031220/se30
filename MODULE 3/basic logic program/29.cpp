              //Convertion of Minutes into Seconds & hours 
#include<stdio.h>
main()
{
	float a;
	printf("Enter Minutes:");
	scanf("%f",&a);   //user defined value stored
	
	printf("\n%.2f Minutes = %.2f Seconds ",a,float(a*60));    //result
	printf("\n%.2f Minutes = %.2f hours ",a,float(a/60));
}

