#include<stdio.h>

main()
{
	int i,a[5];
	
	for(i=0;i<5;i++)   ///accept 5 numbers from user
	{
		printf("Enter Your Number: ");   //user input
		scanf("%d",&a[i]);
		
		if(a[i]%2==0) printf("%d is a Even number",a[i]);   //result print after checking odd even
		else printf("%d is a Odd Number\n\n",a[i]);
		
	}
}
