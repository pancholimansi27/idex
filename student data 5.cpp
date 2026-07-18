#include<stdio.h>
#include<string.h>
int main()
{
	char choise[20];
	int login;
	char name[20];
	char password[20];
	printf("enter the choise ");
	scanf("%s",choise);
	if(strcmp(choise,"login")==0)
	{
		while(2)
		{
		
			printf("enter the name ");
			scanf("%s",name);
			if(strcmp(name,"admin")!=0)
			{
			  printf("invaild name\n");
			  continue;	
			}
				printf("enter the password ");
				scanf("%s",password);
				
				if(strcmp(password,"manu")!=0)
				{
				  printf("invaild password\n");
				  continue;	
				}
						printf("login sucessfully! ");
						break;
		}
	}
				  else
			        {		
				      printf("invaild login\n");
				    }
				      return 0;
}
