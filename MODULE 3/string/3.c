#include<stdio.h>
main()
{
	int i,start=0,temp;
	char str[256];
	
	printf("Enter String: ");   //user input stored
	gets(str);
	
	int lenth =strlen(str)-1;

	for(i=0;i<256;i++)
	{
	if(start<=lenth)
	{
		temp=str[start];
		str[start]=str[lenth];   ///swap string charcter in reverse order
		str[lenth]=temp;
		start++;
		lenth--;
	}
    }
	
	printf("\nIndividual characters in reversed order are:\n");

    for (i = 0; str[i] != '\0'; i++)
	{
        printf("Character %d: %c\n", i + 1, str[i]);   //print string individual charactor 
    }
    str[i]='0';
}
