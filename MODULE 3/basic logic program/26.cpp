                //Convert Fahrenheit to Celsius

#include<stdio.h>
main()
{
	float f;
	
	printf("Enter the Temperature in Fahrenheit: ");
	scanf("%f",&f);     //user defined value stored
	
	//formula is taken from google
	
	printf("\nTemperature in Celsius is: %.4f",float((f-32)*5/9));  //result
}
