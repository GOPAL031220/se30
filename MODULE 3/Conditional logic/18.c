
#include <stdio.h>
main()
{
    int cp,sp, amt; 

    printf("Enter cost price: ");
    scanf("%d", &cp);
    printf("Enter selling price: ");   //user defined value stored
    scanf("%d", &sp);
    
    if(sp > cp)      //result
    {     
        
        amt = sp - cp;
        printf("Profit = %d", amt);
    }
    else if(cp > sp)
    {
        
        amt = cp - sp;
        printf("Loss = %d", amt);
    }
    else
    {
        
        printf("No Profit No Loss.");
    }
    
    
}
