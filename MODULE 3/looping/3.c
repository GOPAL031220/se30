#include <stdio.h>

int main() 
{
    int numbers[10],i;
    int even_count = 0;
    int odd_count = 0;
    int even_sum = 0;
    int odd_sum = 0;

    for(i = 0; i < 10; i++) 
	{
        printf("Enter number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }

    
    for(i = 0; i < 10; i++) 
	{
        if(numbers[i] % 2 == 0)
		{
            even_count++;
            even_sum += numbers[i];
            
        } 
		else
		{
            odd_count++;
            odd_sum += numbers[i];
        }
    }

    
    printf("\na. How many Even numbers are there: %d\n", even_count);
    printf("b. How many odd numbers are there: %d\n", odd_count);
    printf("c. Sum of even numbers: %d\n", even_sum);
    printf("d. Sum of odd numbers: %d\n", odd_sum);

}
