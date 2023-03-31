#include<stdio.h>
#include<conio.h>
main()
{
	int t1,t2,t3,y,z;
	clrscr();
	printf("enter the z :");
	scanf("%d",&z);
	printf("\z%d %d",t1,t2);
	for(y=2;y<=z;y++)
	{
		t3=t1+t2;
		printf("%d",t3);
		t1=t2;
		t2=t3;
	}
	getch();
}