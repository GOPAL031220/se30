#include <stdio.h>
main()
{
    int i, j;
    for (i =1; i <=50; i++)
	{
        if (i < 10) printf("0%d ", i);
        else printf("%d ", i);

        if (i % 10 == 0) printf("\n");
    }
}
