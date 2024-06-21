#include <stdio.h>

main()
{
    int angle1, angle2, angle3;

    printf("Enter first angle: ");
    scanf("%d", &angle1);

    printf("Enter second angle: ");
    scanf("%d", &angle2);

    printf("Enter third angle: ");    //user defined value stored
    scanf("%d", &angle3);

    if(angle1 + angle2 + angle3 == 180) printf("\nThe angles can form a triangle.");   //result
    
	else printf("\nThe angles cannot form a triangle.");
}
