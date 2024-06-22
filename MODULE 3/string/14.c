#include<stdio.h>
main()
{
	int i,j;
	char a[256],b[256],c[256];
	
	printf("Enter String 1: ");
	gets(a);
	
	printf("Enter String 2: ");   ////user defined value stored
	gets(b);
	
	for(i=0;a[i]!='\0';i++)
	{
		c[i]=a[i];
	}
	
	for(j=0;b[j]!='\0';j++)  //merge
	{
		c[i]=b[j];
		i++;
	}
	
	printf("\nMerge string is: %s",c);   //result
}
