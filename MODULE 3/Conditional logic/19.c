#include <stdio.h>

main() 
{
    int customerID,unitsConsumed;
    char customerName[50];
    float totalAmount;

    
    printf("Enter customer ID: ");
    scanf("%d", &customerID);
    printf("Enter customer name: ");
    scanf("%s", customerName);
    printf("Enter units consumed: ");    //user defined value stored
    scanf("%d", &unitsConsumed);


    if (unitsConsumed < 350)   //conditions used for bill calculation
	{
        totalAmount = unitsConsumed * 1.20;
    }
	
	else if (unitsConsumed < 600)
	{
        totalAmount = 349 * 1.20 + (unitsConsumed - 349) * 1.50;
    }
	
	else if (unitsConsumed < 800)
	{
        totalAmount = 349 * 1.20 + 250 * 1.50 + (unitsConsumed - 599) * 1.80;
    }
	
	else
	{
        totalAmount = 349 * 1.20 + 250 * 1.50 + 200 * 1.80 + (unitsConsumed - 799) * 2.00;
        totalAmount= totalAmount+totalAmount*0.18;
	}
	
	
	
	if(totalAmount<256)
	{
		totalAmount=256;
	}
	

    printf("\nElectricity Bill:\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);   ///result
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Total Amount: %.2f\n", totalAmount);
    
    
}
