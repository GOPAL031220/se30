#include<stdio.h>

main()
{   int i,lenth=-1;
	char str[256];
    printf("Enter a string: ");  ///user input
    scanf("%s",&str);
    
    for(i=0;str[i]!='\0';i++)
    {
    	lenth++;  //count the lenth of string
	}
	int start=0,temp;
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
	
	printf("Reversed String: %s",str);   //result
}
