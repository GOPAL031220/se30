#include <stdio.h>

int main() {
    int num, even_count = 0, odd_count = 0;
    int i = 1;

    while (i <= 5) {
        printf("Enter number %d: ", i);  //user defined value stored
        scanf("%d", &num);

        if (num % 2 == 0)
		{
            even_count++;
        } 
		else 
		{
            odd_count++;
        }

        i++;
    }

    printf("\nNumber of even numbers: %d\n", even_count);   //result
    printf("Number of odd numbers: %d\n", odd_count);

}
