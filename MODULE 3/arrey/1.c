#include <stdio.h>
main()
{
    int n,i,j, a[256];
    printf("How Many Number you Want to Enter: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
	{
        printf("Enter Number: ");
        scanf("%d", &a[i]);
    }
    
    for(i=0;i<n;i++)
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
