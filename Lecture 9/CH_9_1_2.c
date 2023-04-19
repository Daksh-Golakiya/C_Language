#include<stdio.h>

main() 
{
   int n;
   printf("enter the element of array :");
   scanf("%d",&n);
   int a[n];
   int i,b=0;
   for(i=1;i<=n;i++)
   {
   	  printf("Enter the element : ");
   	  scanf("%d ",&a[i]);
   }
   for(i=1;i<=n;i++)
   {
   	  printf("%d ",a[i]);
   	  b++;
   }
   printf(" The length of array : %d ",b);
}

