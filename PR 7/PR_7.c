#include<stdio.h>

int addition(int a,int b)
{
	return a+b;
}
int subtraction(int a,int b)
{
	return a-b;
} 
int multiplication(int a,int b)
{
	return a*b;
}
int division(int a,int b)
{
	return a/b;
}
int modulo(int a,int b)
{
	return a%b;
}
void main()
{
	int a,b,n;
	printf("Press 1 for addition.\n");
	printf("Press 2 for subtraction.\n");
	printf("Press 3 for multiplication.\n");
	printf("Press 4 for division.\n");
	printf("Press 5 for modulo.\n");
	printf("Press 0 for exit.\n");
	printf("Enter your choice:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("Enter a:");
	        scanf("%d",&a);
	        printf("Enter the b:");
	        scanf("%d",&b);
			printf("%d",addition(a,b));
			main();
		break;
		
		case 2:
			printf("Enter a:");
	        scanf("%d",&a);
	        printf("Enter b:");
	        scanf("%d",&b);
			printf("%d\n",subtraction(a,b));
			main();
		break;
		
		case 3:
			printf("Enter a:");
	        scanf("%d",&a);
	        printf("Enter b:");
	        scanf("%d",&b);
			printf("%d\n",multiplication(a,b));
			main();
		break;
		
		case 4:
			printf("Enter a:");
	        scanf("%d",&a);
	        printf("Enter b:");
	        scanf("%d",&b);
			printf("%d\n",division(a,b));
			main();
		break;
		
		case 5:
			printf("Enter a:");
	        scanf("%d",&a);
	        printf("Enter b:");
	        scanf("%d",&b);
			printf("%d\n",modulo(a,b));
			main();
		break ;
		
		case 0:
			printf("YOUR CHOICE IS INVALID.");
			break;
     }
}
