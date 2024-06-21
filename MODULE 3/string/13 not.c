#include <stdio.h>

removeNonAlphabets(char str[])
{
    int i,j,lenth;
    lenth=strlen(str);     //count the lenth of string
    
    for (i = 0; i<lenth; i++)
	{
		
			for(j=i;j<lenth-1;j++)
			{
				if(isalpha(str[i]))
				{
					str[j]=str[j+1];
				}
				
			}
			lenth--;
			i--;
    }
    
    printf("%s",str);
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    str[strlen(str)] = '\0'; // remove the newline character
   
    
    printf("Original string: %s\n", str);   //print original string

    removeNonAlphabets(str);
}
