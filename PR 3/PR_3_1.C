#include<stdio.h>
#include<conio.h>
main()
{
      char n='a';
      clrscr();
      printf("aphabet are a to z:\n");
      do
      {
	 printf("%c",n);
	 n++;
      }
      while(n<='z');
      getch();
}