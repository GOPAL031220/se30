#include<stdio.h>

sort()
{
	int n,o,i,j;
	printf("\nEnter the size of Arrey: ");    //size input
	scanf("%d",&n);
	
	printf("Enter 0 for descending order or 1 for ascending order: "); //choice for descending or ascending
    scanf("%d", &o);
    
    if(o<0 || o>1)
    {
    	printf("\nyou Entered incorect number!!!\nPlease Enter 0 for descending order or 1 for ascending order: ");
    	scanf("%d", &o);
	}
    
    int a[n];
    printf("Enter Elements of Arrey:\n");   //Arrey input
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)      //Arrey Sorting As per choice
		{
		if(o==0)
		{
				if(a[i]<a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
		if(o==1)
		{
				if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		}
	}
		printf("\nSorted Arrey: ");  //result print
	for(i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
	}
}
main()
{
	sort();
	sort();
}
