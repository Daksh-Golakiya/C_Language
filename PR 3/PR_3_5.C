#include<stdio.h>
#include<conio.h>
main()
{
	  int a,rev=0,rem,b;
	  clrscr();
	  printf("enter the a:");
	  scanf("%d",&a);
	  original=a;
	  while(a!=0)
	   {
		rem=a%10;
		rev+rev*10+rem;
		a/10;
	   }
		printf("the rev is %d is %d\a",original,rev);
		if(original==rev)
	   {
		printf("%d is palindrome\a",original);
	   }
	   else
	   {
		printf("%d is not palindome\a",original);
	   }
	   getch();
}