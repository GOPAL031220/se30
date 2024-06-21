#include <stdio.h>
#include <math.h>

count_digits(int number)  //number ke total digits count karega
{
    int count = 0;
    while (number > 0)
	{
        number /= 10;
        count++;
    }
    return count;
}

int main() {
    int number,original_number,sum = 0;
    printf("Enter a number: ");   ///user input & store
    scanf("%d", &number);
    original_number = number;
    
    int digits = count_digits(number);  // function call for digit count
    
    for (number=number; number > 0; number /= 10)
	{
        int digit = number % 10;  //capture digit
        sum += pow(digit, digits);   // power nikalkar add karega
    }
    if (sum == original_number) printf("%d is an Armstrong number.\n", original_number);
    else printf("%d is not an Armstrong number.\n", original_number);     //result
}
