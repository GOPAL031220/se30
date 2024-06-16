           //Area & Circumference of Circle

#include<stdio.h>
main()
{
	float b=3.14159265358979,r;
	
	printf("Enter the radius of circle: ");
	scanf("%f",&r);     //user defined radius stored
	
	printf("\nArea of Circle is: %.4f",float(b*r*r));  //result
	printf("\nCircumference of Circle is: %.4f",float(2*b*r));
	
}
