#include<stdio.h>
#include<string.h>
int main()
{
		char name[20];
		char password[20];
		printf("enter the name ");
		scanf("%s",&name);
		printf("enter the password ");
		scanf("%s",&password);
		if(strcmp(name,"admin")==0)
		{
			if(strcmp(password,"manu")==0)
			{
				printf("login sucessfully! ");
			}
			else
			{	
				printf("invaild password\n");
			}
		}
		
		else
		{
			printf("invalid name\n");
			printf("enter the name");
			scanf("%s",name);
			
	
		}
	
}
	
	

