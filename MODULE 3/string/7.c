#include<stdio.h>
main()
{
	char a[256],b[256];
	
	printf("\nEnter String: ");  //user defined value stored
	scanf("%s",&a);
	
	strcpy(b,a);
	printf("\nstring is: %s",b);     //result
}
