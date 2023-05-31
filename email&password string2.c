#include<stdio.h>

main()
{
	char a[100],b[100];
	
	printf("enter the username =");
	gets(a);
	printf("enter the password =");
	gets(b);
	
	if(strcmp(a,"priyanka")==0)
	{
	
		if(strcmp(b, "priya@1234")==0)
	  {
	
		printf("user successfully loging");
      }
	
	else
	{
		printf("password entered not invalid");
	}
}
    else
	{
		printf("username entered is invalid");
	}
}
	

