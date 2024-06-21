#include<stdio.h>
main()
{
	char a[256],b[256];
	
	printf("\nEnter String: ");
	scanf("%s",&a);
	
	strcpy(b,a);
	printf("\nstring is: %s",b);
}
