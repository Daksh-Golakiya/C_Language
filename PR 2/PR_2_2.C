#include<stdio.h>
#include<conio.h>
main()
{
 int n;
 clrscr();
 printf("enter the value of n:");
 scanf("%d",&n);
 (n%2==0)?printf("even number is:")
	 :printf("odd number is:");
 getch();
}