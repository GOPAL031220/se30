#include<stdio.h>

int isPalindrome(char str[])   //check palindrone or not
{
    int start = 0;
    int end = strlen(str) - 1;
    while (start < end)
	{
        if (str[start]!= str[end])
		{
            return 0;
        }
        start++;
        end--;
    }
}

main()
{   int i;
	char str[256];
    printf("Enter a string: ");  ///user input
    scanf("%s",&str);
    
    int lenth = strlen(str)-1;   //count lenth
	
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
	
	printf("Reversed String: %s",str);   //print reversed string
	
    if (isPalindrome(str)) printf("\n\n%s is a palindrome.\n", str);
    else printf("\n\n%s is not a palindrome.\n", str);
}
