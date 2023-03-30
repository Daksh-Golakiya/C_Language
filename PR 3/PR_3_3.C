#include<stdio.h>
#include<conio.h>
main()
{
   int b,count=0;
   clrscr();
   printf("enter the value of b:");
   scanf("%d",&b);
   while(b!=0)
   {
	b=b/10;
	count++;
   }
   printf("\n the number of digits is integer is :%d",count);
   getch();
}