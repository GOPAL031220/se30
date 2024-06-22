#include <stdio.h>
main()
{
    int n,i,j, a[256];
    printf("How Many Number you Want to Enter: ");   //user defined value stored
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
	{
        printf("Enter Number: ");       //user defined value stored
        scanf("%d", &a[i]);
    }
    
    for(i=0;i<n;i++)   //swapping in decreising order
    {
    	for(j=0;j<n;j++)
    	{
    		if(a[i]<a[j])
    		{
    			a[i]=a[j];
			}
		}
	}
	
	printf("\nMax Numner is: %d",a[0]);
}
