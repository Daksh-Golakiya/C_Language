#include<stdio.h>

main()
{
	int n,i;
	printf("enter the size of array :");
	scanf("%d",&n);
	
	int a[n],b[n],c[n*2];
	
	for(i=0;i<n;i++)
	{
		printf("enter element a[%d] : ",i+1);
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		printf("enter element a[%d] : ",i+1);
		scanf("%d",&b[i]);
		c[i+n]=b[i];
	}
	printf("the array after merging.....");
	for(i=0;i<n*2;i++)
	{
		printf("%d",c[i]);
	}
}
