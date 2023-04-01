#include<stdio.h>
#include<conio.h>
main()
{
   char c;
   clrscr();
   printf("entre the value:");
   scanf("%c",&c);

   if((c>= 'A' && c<= 'Z') || (c>= 'a' && c<= 'z'))
   {
      printf("'%c'is alphabet...",c);
   }
   else if(c>='0'&& c<='9')
   {
     printf("'%c' is digit...",c);
   }
   else
   {
     printf("'%c' is special cheracter....",c);
   }
   getch();
}