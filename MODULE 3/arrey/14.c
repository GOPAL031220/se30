 #include<stdio.h>
 main()
 {
 	int a[2][3],i,j;
 	
 	for(i=0;i<2;i++)
 	{
 		
 		for(j=0;j<3;j++)
 		{
 			printf("\nEnter Number :");    //user defined value stored
 			scanf("%d",&a[i][j]);
		}
 		
	}
	
	for(i=0;i<2;i++)
 	{
 		for(j=0;j<3;j++)
 		{
 			printf("\na[%d][%d] number is : %d",i,j,a[i][j]);    //result print
 		
		}
 		
	}
	
	
 }
