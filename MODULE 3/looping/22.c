#include <stdio.h>

palindrome(int n)  // for checking number is palindrome or not
{   
    int original = n;
    int reversed = 0;
    
    while (n != 0)
	{
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
   return original == reversed;
}

int main()
{
    int count=1,num;
    while (count <= 3)
	{
        printf("Enter a number: ");  ///user input
        scanf("%d", &num);
        if (palindrome(num)) printf("%d is a palindrome number\n", num); //function call
        else printf("%d is not a palindrome number\n", num);
        
        count++;
    }   
}
