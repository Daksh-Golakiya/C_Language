#include<stdio.h>
#include<conio.h>
main()
{
   int a,i=1,fact=1;
   clrscr();
   printf("enter the value of a :");
   scanf("%d",&a);
   while(i<=a)
   {
     fact=fact*i;
     i++;
   }
   printf("factorial is :%d",fact);
   getch();
}