#include<stdio.h>

/*
     5 4 3 2 1
       4 3 2 1
         3 2 1
           2 1 
             1
*/

main()
{
	int i,j,s;
	
	for(i=5;i>=1;i--)
	{
		for(s=0;s<=5-i;s++)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
	printf("\n");
    }
}

