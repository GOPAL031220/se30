             //sum of 10 numbers using while loop
#include<stdio.h>
main()
{
	int a[10],sum=0;
	int i=0;
	while(i<10)
	{
		printf("Enter Your Number: ");
		scanf("%d",&a[i]);
		i++;
	}
	
	int j=0;
	while(j<10)
	{
		sum=sum+a[j];
		j++;
	}
	printf("\nSum of 10 Numbers is: %d",sum);
}
