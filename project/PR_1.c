#include<stdio.h>
main()
{
	FILE *fp ; 
    char file[100];
    
	fp= fopen("data.txt","w");
	
	printf("enter any data : ");
	gets(file);
	                                                                                                                                                                                                                                                                                                                                                                                                        
	fputs(file,fp);
	
	fclose(fp) ;
}
