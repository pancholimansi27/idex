#include<stdio.h>
int main()
{
	int age;
	char name[50];
	printf("enter the name");
	scanf("%s",name);
	printf("enter the age");
	scanf("%d",&age);
	if(age>=18){
		printf("%s of eligible of age ",name);
	}
	if(age<18 && age>0)
	{
		printf("%s of need of age",name);
	}
	if(age<=0)
	{
		printf("%s of invalid age",name);
	}
	
}
