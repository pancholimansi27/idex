#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the number1 ");
	scanf("%d",&a);
	printf("enter the number2 ");
	scanf("%d",&b);
	if(a%2==0 && b%2==0 && a>0 &&b>0){
		printf("both are even");
	}
	else if(a%2==0 && b%2!=0)
	{
		printf("b is odd");
	}
	else if(a%2==0 && b==0 && a>0)
	{
		printf("a is even");
	}
	else if(a%2!=0 && b%2==0 && b>0)
	{
		printf("b is even");
	}
	else if(a%2!=0 && b%2!=0){
		printf("both are odd");
	}
	else if(a%2!=0 && b==0 )
	{
		printf("a is odd");
	}
	else if(a==0 && b%2==0 && b>0)
	{
		printf("a is zero");
	}
	else if(a==0 && b%2!=0){
		printf("b is odd");
	}
	else 
	{
		printf("both are zero");
	}
}
