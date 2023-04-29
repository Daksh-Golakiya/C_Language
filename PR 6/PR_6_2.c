#include<stdio.h>
main()
{
    char str[100];
    int i, l, b=0;
    printf("Enter a string:");
    scanf("%s",str);
    l=strlen(str);
    for(i=0;i<l;i++)
	{
      if(str[i]!=str[l-i-1])
		{
          b=1;
        }
    }
    
    if(b==0)
    {
      printf("String is a palindrome.");
    }    
    else
	{
      printf("String is not a palindrome.");
    }
} 
