#include<stdio.h>

main()
{
	int i;
	char pass[5];
	printf("enter your password :");
   for(i=0;i<=5;i++)
	{
			scanf("%c",&pass[i]);
	}
	for(i=0;i<=5;i++)
	{
		if(pass[i]>=65 && pass[i]<=90)
		{
			pass[i]=pass[i]+32;
			printf("%c",pass[i]);
		}
	}
}
