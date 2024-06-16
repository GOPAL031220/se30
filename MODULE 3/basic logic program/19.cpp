                //Calculation of Interest Compounding Anually
                
#include<stdio.h>
#include<math.h>
main()
{
	float p,r,a,b;
	int t;
	
	printf("Enter the Principal Amount in Rupees: ");
	scanf("%f",&p);
	printf("Enter the Interest Rate in %: ");
	scanf("%f",&r);     
	printf("Enter the tenure in years: ");
	scanf("%d",&t);     //user defined value stored
	
	a=pow((1+r/100),t);
	
	b=p*a;
	printf("\nTotal Amount with interest After %d years is: %.4f",t,b);    // 1st result
	
	printf("\nOnly compound interset After %d years is: %.4f",t,b-p);      // 2st result
}
