                //Circumference of Triangle

#include<stdio.h>
main()
{
	float a,b,c;
	
	printf("Enter the lenth of first side of triangle: ");
	scanf("%f",&a);
	printf("Enter the lenth of second side of triangle: ");
	scanf("%f",&b);     
	printf("Enter the lenth of third side of triangle: ");
	scanf("%f",&c);     //user defined value stored
	
	printf("\nCircumference of Triangle is: %.4f",float(a+b+c));  //result
	
}
