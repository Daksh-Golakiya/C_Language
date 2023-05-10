#include<stdio.h>

int main()
{
  char str[100], *p;
  
  int i = 0;
  
  printf("Enter Any string : ");
  gets(str);
  
  p = str;
  
  while (*p!=NULL)
  {
    i++;
    p++;
  }
  printf("Length of String : %d", i);

  return 0;
}
