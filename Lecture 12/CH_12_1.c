#include<stdio.h>

void main()
{
	int a, square = 0;
	int *p;
	printf("enter the value of a : ");
	scanf("%d",&a);
	p = &a;
	square = (*p)*(*p);
	printf("SQUARE OF VALUE  is %d",square);
}
