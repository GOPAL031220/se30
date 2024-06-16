                //Area of Triangle

#include<stdio.h>
main()
{
	float b,h;
	
	printf("Enter the base of Triangle: ");
	scanf("%f",&b);     
	printf("Enter the height of Triangle: ");
	scanf("%f",&h);     //user defined value stored
	
	printf("\nArea of Triangle is: %.4f",float((b*h)/2));  //result
	
}
