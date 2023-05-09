#include<stdio.h>
main()
{
	int a,b;
	int *p;
	int *q;
	printf("ENTER THE VAlUE OF a: ");
	scanf("%d",&a);
    printf("ENTER THE VAlUE OF b: ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	p=&a;
	q=&b;
	printf("a=%d\n",*p);
	printf("a=%d",*q);
}
