#include<stdio.h>

main()
{
	int i,a[5];
	
	for(i=0;i<5;i++)   ///accept 5 numbers from user
	{
		printf("Enter Your Number: ");   //user input
		scanf("%d",&a[i]);
		
		int reversed=0,digit;
		for(;a[i]!=0;a[i]/=10)    //reverse the number
		{
	     	digit=a[i]%10;
		    reversed=reversed*10+digit;
		}
		printf("Reversed Numnber: %d\n\n",reversed);  //result print 
		
	}
}
