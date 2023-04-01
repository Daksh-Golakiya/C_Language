#include<stdio.h>
#include<conio.h>
main()
{
  int n;
  clrscr();
  printf("press 1 for monday:\n");
  printf("press 2 for tuesday:\n");
  printf("press 3 for wednesday:\n");
  printf("press 4 for thursday:\n");
  printf("press 5 for friday:\n");
  printf("press 6 for saturday:\n");
  printf("press 7 for sunday:\n");
  scanf("%d",&n);
  switch(n)
  {
   case 1:
     printf("Today is monday:");
   break;
   case 2:
     printf("Today is tuesday:");
   break;
   case 3:
     printf("Today is wednesday:");
   break;
   case 4:
     printf("Today is thursday:");
   break;
   case 5:
     printf("Today is friday:");
   break;
   case 6:
    printf("Today is saturday:");
   break;
   case 7:
    printf("Today is sunday:");
   break;
   default:
     printf("invalid choice");
  }
  getch();
}
