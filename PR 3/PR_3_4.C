#include<stdio.h>
#include<conio.h>
main()
{
	int n,f_d,l_d,sum;
	clrscr();
	printf("enter the n:");
	scanf("%d",&n);
	while(f_d>=10)
	{
		f_d/=10;
		l_d=n%10;
		sum=f_d+l_d;
	}
	printf("sum of f_d and l_d :%d",sum);
	getch();
}