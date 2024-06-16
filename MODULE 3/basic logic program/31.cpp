              //Convertion of Kilometer into meter 
#include<stdio.h>
main()
{
	float a;
	printf("Enter Kilometers:");
	scanf("%f",&a);   //user defined value stored
	
	printf("\n%.2f Kilometers = %f Meters ",a,float(a*1000));    //result
}

