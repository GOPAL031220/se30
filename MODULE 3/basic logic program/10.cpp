                //Area of a rectangular prism

#include<stdio.h>
main()
{
	float w,l,h;
	
	printf("Enter the width of rectangular prism: ");
	scanf("%f",&w);
	printf("Enter the lenth of rectangular prism: ");
	scanf("%f",&l);     
	printf("Enter the height of rectangular prism: ");
	scanf("%f",&h);     //user defined value stored
	
	printf("\nArea of a rectangular prism is: %.4f",float(2*(w*l+l*h+h*w)));  //result
	
}
