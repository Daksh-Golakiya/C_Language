#include<stdio.h>
#include<conio.h>
main()
{
   float bill,unit,s_c,f_b;
   clrscr();
   printf("Enter electicity unit:");
   scanf("%f",&unit);
   if(unit<=50)
   {
     bill=unit*0.50;
   }
   else if (unit>50 && unit<=150)
   {
    bill=25+(unit-50)*0.75;
   }
   else if (unit>150 && unit<=250)
   {
    bill=100+(unit-150)*1.20;
   }
   else
   {
    bill=220+(unit-250)*1.75;
   }
   s_c=bill*20/100;
   f_b=bill+s_c;
   printf("Total electricity bill  is:%.2f",f_b);
   getch();
}
