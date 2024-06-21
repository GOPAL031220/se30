#include<stdio.h>

main()
{
	char a[5][50];
	int i;
	
	for(i=0;i<5;i++)   ///accept 5 name from user
	{
		printf("Enter name of student %d: ",i+1);   //user input stored
		scanf("%s",&a[i]);
		
	}
	
	
	printf("\n\n");
	for(i=0;i<5;i++)   ///result print
	{
		printf("\nName of student %d: %s",i+1,a[i]);
	}
}
